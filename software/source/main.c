#include "define.h"
#include "uart.h"
#include "eeprom1.h"
#include "string.h"
#include "init.h"
#include "func.h"

extern u8 msFlag;
u8 minute;
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
				if(!memcmp(cmdbuff[wIndex]+i,"ÃÜÂë",4)){
					memcpy(buff,cmdbuff[wIndex]+i+4,key_length);
					if(cmdLength[wIndex]>16){
						if(!memcmp(cmdbuff[wIndex]+i+10,"ÐÂÃÜÂë",6)){
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
		if(!memcmp(cmdbuff[wIndex]+i,"ÃÜÂë",4)){
			memcpy(tempKey,cmdbuff[wIndex]+i+4,key_length);
			if(!memcmp(tempKey,keyBuff,key_length)){
				if(cmdLength[wIndex]>16){
					if(!memcmp(cmdbuff[wIndex]+i+10,"ÐÂÃÜÂë",6)){
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
		
		if(!memcmp(cmdbuff[wIndex]+i,"Éè·À",4)){
			shefang = 1;
			flag = 1;
		}			
		if(!memcmp(cmdbuff[wIndex]+i,"³··À",4)){
			shefang = 0;
			flag = 1;
		}			
		if(!memcmp(cmdbuff[wIndex]+i,"¼àÌý",4)){
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
	
void CGATT_init(u8 enable)
{
	if(enable){
		USART_send_str("AT+CGATT=1");
		while(!waitResult()){
			USART_send_str("AT+CGATT=0");
			if(waitResult()){
				USART_send_str("AT+CGATT=1");
			}
		}
	}
	else{
		USART_send_str("AT+CGATT=0");
		while(!waitResult()){
			USART_send_str("AT+CGATT=0");
		}

	}
}
void CGDCONT_init(u8 enable)
{
	if(enable){
		USART_send_str("AT+CGDCONT=1,\"IP\",\"CMNET\"");
		while(!waitResult()){
			USART_send_str("AT+CGDCONT=0");
			if(waitResult()){
				USART_send_str("AT+CGDCONT=1,\"IP\",\"CMNET\"");
			}
		}
	}
	else{
		USART_send_str("AT+CGDCONT=0");
		while(!waitResult()){
			USART_send_str("AT+CGDCONT=0");
		}

	}
}

void CGACT_init(u8 enable)
{
	if(enable){
		USART_send_str("AT+CGACT=1,1");
		while(!waitResult()){
			USART_send_str("AT+CGACT=0");
			if(waitResult()){
				USART_send_str("AT+CGACT=1,1");
			}
		}
	}
	else{
		USART_send_str("AT+CGACT=0");
		while(!waitResult()){
			USART_send_str("AT+CGACT=0");
		}

	}
}
void CIPStart(void)
{
		USART_send_str("AT+CIPSTART=\"TCP\",\"114.215.44.97\",9898");
		while(!waitResult()){
			USART_send_str("AT+CIPCLOSE");
			if(waitResult()){
				USART_send_str("AT+CIPSTART=\"TCP\",\"114.215.44.97\",9898");
			}
		}
}

void CIPClose(void){
	USART_send_str("AT+CIPCLOSE");
	while(!waitResult()){
		USART_send_str("AT+CIPCLOSE");
	}
}

u8 CIPSend(char * str){
	USART_send_str("AT+CIPSEND");
	msFlag = 0;
	while(!msFlag);
	
	USART_send_str(str);
	
	USART_Transmit(0x1a);
	if(waitResult()){
		return 1;
	}
	else{
		return 0;
	}
}

void main(void ){
	u8 ret;
	int i;
	u8 cmdbufferr[4][128];
	u8 tempPhNum[12];
	
	for(i=0;i<4;i++){
		cmdbuff[i] = cmdbufferr[i];
	}
	init_devices();
	waitInfo("+CREG: 1",8);
	led(0,1);
	CGATT_init(1);
	
	led(1,1);
	CGDCONT_init(1);
	
	led(2,1);
	CGACT_init(1);
	led(3,1);
	CIPStart();
	led(4,1);
	while(1){
		if(cmdNum>0){
			for(i=0;i<cmdLength[wIndex]-3;i++){
				if(!memcmp(cmdbuff[wIndex]+i,"RING",4)){
					status = RING;
				}
			}
			wIndex++;
			cmdNum--;		
			if(wIndex==4){
				wIndex=0;
			}
		}
			switch(status){
				case IDLE:{
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





			if(minute){
				minute=0;
				CIPSend("{\"id\":\"1234567887654321\",\"lat\":\"100\",\"lng\":\"80\"}");
				led(7,1);
			}
	}
}
