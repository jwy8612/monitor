#include "define.h"
#include "uart.h"
#include "eeprom1.h"
#include "string.h"
#include "init.h"
#include "func.h"

int doneFlag=0;
int errflag;
int readflag;
int keyflag;
u8 keyBuff[6];
u8 key_old[6];
u8 phnum[12];
u8 *cmdbuff[4];
int shefang;
int jianting;
int newms;
int startFlag;
u8 rIndex=0;
u8 wIndex=0;

int cmdNum=0;
int cmdLength[4];

enum STATUS status;
void waitInfo(u8 * temp, u8 len){
	int flag = 0;
	int i;
	static int j=0;
	
	while(1){
		if(cmdNum>0){
			//EEPROM_write(0x30+j*0x20,cmdbuff[wIndex],cmdLength[wIndex]);
			//j++;
			for(i=0;i<cmdLength[wIndex]-len+1;i++){
				if(!memcmp(cmdbuff[wIndex]+i,temp,len)){
					
					flag =1;
					break;
				}
			}

			wIndex++;
			cmdNum--;		
			if(wIndex==4){
				wIndex=0;
			}
			if(flag){
				break;
			}
		}
	}
	return;

}

u8 waitResult(void){
	int flag = 0;
	int i;
	static int j=0;
	
	while(1){
		if(cmdNum>0){
			for(i=0;i<cmdLength[wIndex]-1;i++){
				if(!memcmp(cmdbuff[wIndex]+i,"OK",2)){
					flag = 1;
					break;
				}
			}
			
			for(i=0;i<cmdLength[wIndex]-1;i++){
				if(!memcmp(cmdbuff[wIndex]+i,"ERROR",5)){
					flag = 2;
					break;
				}
			}		

			wIndex++;
			cmdNum--;		
			if(wIndex==4){
				wIndex=0;
			}
			if(1==flag){
				return 1;
			}
			if(2==flag){
				return 0;
			}
		}
	}
	return 0;
}
u8 waitPhnum(u8 *buff){
	int flag = 0;
	int i;
	static int j=0;
	
	while(1){
		if(cmdNum>0){
			for(i=0;i<cmdLength[wIndex]-1;i++){
				if(!memcmp(cmdbuff[wIndex]+i,"+CMT: \"+86",10)){
					memcpy(buff,cmdbuff[wIndex]+i+10,phnum_length);
					flag =1;
					break;
				}
			}
			wIndex++;
			cmdNum--;		
			if(wIndex==4){
				wIndex=0;
			}
			if(flag){
				break;
			}
		}
	}
	return flag;
}

u8 waitCallPhnum(u8 *buff){
	int flag = 0;
	int i;
	static int j=0;
	
	while(1){
		if(cmdNum>0){
			for(i=0;i<cmdLength[wIndex]-1;i++){
				if(!memcmp(cmdbuff[wIndex]+i,",\"",2)){
					memcpy(buff,cmdbuff[wIndex]+i+2,phnum_length);
					flag =1;
					break;
				}
			}
			wIndex++;
			cmdNum--;		
			if(wIndex==4){
				wIndex=0;
			}
			if(flag){
				break;
			}
		}
	}
	return flag;
}


u8 waitKey(u8 *buff, u8 *newkey){
	int flag = 0;
	int i;
	static int j=0;
	while(1){
		if(cmdNum>0){
			for(i=0;i<cmdLength[wIndex]-1;i++){
				if(!memcmp(cmdbuff[wIndex]+i,"√‹¬Î",4)){
					memcpy(buff,cmdbuff[wIndex]+i+4,key_length);
					if(cmdLength[wIndex]>16){
						if(!memcmp(cmdbuff[wIndex]+i+10,"–¬√‹¬Î",6)){
							memcpy(newkey,cmdbuff[wIndex]+i+16,key_length);
						}
						else{
							memcpy(newkey,buff,key_length);
						}
					}
					else{
						memcpy(newkey,buff,key_length);
					}
					flag =1;
					break;
				}
			}
			wIndex++;
			cmdNum--;		
			if(wIndex==4){
				wIndex=0;
			}
			if(flag){
				break;
			}
		}
	}
	return flag;
}


u8 waitCmd(void){
	int flag = 0;
	int i;
	static int j=0;
	u8 tempKey[6];
	while(cmdNum==0);
	for(i=0;i<cmdLength[wIndex]-1;i++){
		if(!memcmp(cmdbuff[wIndex]+i,"√‹¬Î",4)){
			memcpy(tempKey,cmdbuff[wIndex]+i+4,key_length);
			if(!memcmp(tempKey,keyBuff,key_length)){
				if(cmdLength[wIndex]>16){
					if(!memcmp(cmdbuff[wIndex]+i+10,"–¬√‹¬Î",6)){
						memcpy(keyBuff,cmdbuff[wIndex]+i+16,key_length);
						EEPROM_write(key_addr,keyBuff,key_length);
						flag = 1;
					}
				}
			}
			else{
				flag = 2;
			}
		}
		
		if(!memcmp(cmdbuff[wIndex]+i,"…Ë∑¿",4)){
			shefang = 1;
			flag = 1;
		}			
		if(!memcmp(cmdbuff[wIndex]+i,"≥∑∑¿",4)){
			shefang = 0;
			flag = 1;
		}			
		if(!memcmp(cmdbuff[wIndex]+i,"º‡Ã˝",4)){
			jianting = 1;
			flag = 3;
		}			
	}
	wIndex++;
	cmdNum--;		
	if(wIndex==4){
		wIndex=0;
	}
	return flag;
}
	
void AT_init(void)
{
	int i;
	u8 flag =0;
	USART_send_str("AT+CMGF=1");//…Ë÷√TXT ∏Ò Ω

}
void delay(int i){
	while(i){
		int j=1000;
		i--;
		while(j){j--;

		}
	}
}

void led(int i,int enable){
	if(enable){
		PORTA|=1<<i;
	}
	else{
		PORTA&=~(1<<i);
	}
}
void main(void ){
	u8 ret;
	int i;
	u8 cmdbufferr[4][128];
	u8 tempPhNum[12];
	u8 tempKey[6];
	
	for(i=0;i<4;i++){
		cmdbuff[i] = cmdbufferr[i];
	}
	init_devices();
	waitInfo("+CREG: 1",8);
	led(0,1);
	
	AT_init();
	while(!waitResult()){
		AT_init();
	}
	led(1,1);
	while(0x80!=EEPROM_read_byte(userFlagAddr)){
		if(waitPhnum(phnum)){
			if(waitKey(key_old,keyBuff)){
				if(!memcmp(key_old,"000000",key_length)){
					EEPROM_write(phnum_addr,phnum,phnum_length);
					EEPROM_write(key_addr,keyBuff,key_length);
					EEPROM_write_byte(userFlagAddr,0x80);
				}
			}
		}
	}
	EEPROM_read(phnum_addr,phnum,phnum_length);
	EEPROM_read(key_addr,keyBuff,key_length);
	send_message("welcome!");
	led(2,1);
	while(1){
		if(cmdNum>0){
			for(i=0;i<cmdLength[wIndex]-3;i++){
				if(!memcmp(cmdbuff[wIndex]+i,"RING",4)){
					status = RING;
				}
				if(!memcmp(cmdbuff[wIndex]+i,"MESSAGE",7)){
					status = MSG;
				}
			}
			wIndex++;
			cmdNum--;		
			if(wIndex==4){
				wIndex=0;
			}
		}
		//else{
			switch(status){
				case IDLE:{
					break;
				}
				case MSG :{
					if(waitPhnum(tempPhNum)){
						if(memcmp(tempPhNum,phnum,phnum_length)){
							if(waitKey(tempKey,keyBuff)){
								if(!memcmp(keyBuff,tempKey,key_length)){
									memcpy(phnum,tempPhNum,phnum_length);
									memcpy(keyBuff,tempKey,key_length);
									EEPROM_write(phnum_addr,phnum,phnum_length);
									EEPROM_write(key_addr,keyBuff,key_length);
									send_message("OK!");
								}
								else{
									send_message("wrong password!");

								}
							}
						}
						else{
							ret = waitCmd();
							if(1==ret){
								send_message("OK!");
							}
							if(0==ret){
								send_message("wrong command!");
							}
							
							if(2==ret){
								send_message("wrong password!");
							}
						}
					}
					status = IDLE;
					break;
				}
				case RING:{
					USART_send_str("AT+CLCC");
					waitCallPhnum(tempPhNum);
					if(!memcmp(tempPhNum,phnum,phnum_length)){
						USART_send_str("ATA");
						waitInfo("CONNECT",7);
						status = CALLING;
					}
					else{
						USART_send_str("ATH");
						waitResult();
						status = IDLE;
					}

					break;
				}
				default:{
					break;
				}
		
			}

			if(jianting){
				jianting = 0;
				phcall();
			}

			if(shefang){

			}
			
		//}
	}
}
#if 0
while(1){
	if(cmdNum>0){
		15230092257
		for(i=0;i<cmdLength[wIndex];i++){
			
			if(0==wIndex){
				if(!memcmp(cmdPing+i,"+CREG: 1",8)){
					initFlag=1;
					break;
				}
			}
			if(1==wIndex){
				if(!memcmp(cmdPong+i,"+CREG: 1",8)){
					initFlag=1;
					break;
				}
			}
		}
		
		wIndex++;
		cmdNum--;		
		if(wIndex==2){
			wIndex=0;
		}
		
		if(initFlag){
			break;
		}
		#if 0
		if(0==wIndex){
			EEPROM_write(0x30+j*0x20,cmdPing,cmdLength[wIndex]);
		}
		if(1==wIndex){
			EEPROM_write(0x30+j*0x20,cmdPong,cmdLength[wIndex]);
		}
		
		wIndex++;
		if(wIndex==2){
			wIndex=0;

		}
		cmdNum--;
		j++;
		#endif
	}
}
#endif
#if 0
while(1){
	if(0x80!=EEPROM_read_byte(userFlagAddr)){
		
	}
	else{
			break;
		}
}
#endif
#if 0
while(1){
	switch(status){
		case IDLE:{
			led(3,1);
			led(5,0);
			led(7,0);
			break;
		}
		case MSG :{
			led(3,0);
			led(5,1);
			led(7,0);
			break;
		}
		case RING:{
			led(3,0);
			led(5,0);
			led(7,1);
			startFlag = 1;
			index = 0;
			USART_send_str("AT+CLCC");
			delay(1000);
			for(i=0;i<100;i++){
				if(!memcmp(mstxt+i,",\"",2)){
					memcpy(tempBuffer,mstxt+i+2,phnum_length);
				//	EEPROM_write(phnum_addr,tempBuffer,phnum_length);
					
					//EEPROM_read(phnum_addr,phnum, phnum_length);
					if(!memcmp(tempBuffer,phnum,phnum_length)){
						USART_send_str("ATA");
						status = CALLING;
					}
					else{
						USART_send_str("ATH");
						status = IDLE;
					}
					break;
				}

			}
			break;
		}
		case CALLING:{
			led(3,1);
			led(5,1);
			led(7,1);
			break;
		}
	}	
}

	#if 0
	for(;;){

		if(newms){
			read_message();
			newms = 0;
		}
		keyflag = EEPROM_read_byte(key_flag_addr);
		if(!keyflag){
			if(okflag){
				okflag = 0;
				if(!pass_key()){
					keyflag = 1;
					EEPROM_write_byte(key_flag_addr,1);
					EEPROM_write(key_addr,key,key_length);

				}
				
				if(!pass_phnum()){
					;
				}
			}	
		}
		else{
			if(okflag){
				okflag = 0;
				if(!pass_key()){
					EEPROM_read(key_addr,key_old,key_length);
					if(!memcmp(key,key_old,key_length)){
						EEPROM_write(key_addr,key,key_length);
					}

				}
				
				if(!pass_phnum()){
					;
				}
			}	
		}


	}
	#endif
	#endif
