#include "define.h"
#include "uart.h"
#include "string.h"
#include "eeprom1.h"
//extern u8 waitResult(void);

#if 0
void send_message(char * str)
{
	u8 temp[30];
	int i=0;
	memset(temp,0,30);
	memcpy(temp,"AT+CMGS=\"",9);
	memcpy(temp+9,phnum,11);
	
	memcpy(temp+20,"\"",1);
	USART_send_str(temp);
	msFlag = 0;
	while(!msFlag);
	while(*(str++)!= 0){
		USART_Transmit(*(str-1));
	}
	USART_Transmit(0x1a);
	if(waitResult()){
		return;
	}
}
#endif
#if 0

int read_message(void)//char * num,char * buff)
{
	okflag = 0;
	memset(mstxt,0,100);
	USART_send_str(" AT+CMGR=1");
	while((!okflag)&&(!errflag));
	if(okflag)
		return 0;
	else 
		return -1;
}
int pass_phnum(void)
{
	u8 i;
	for(i=0;i<100 - 3;i++){
		if(memcmp(mstxt+i,"+86",3) == 0){
			memcpy(phnum,mstxt+i+3,11);
			return 0;
		}
	}
	return -1;
}

int pass_key(void)
{
	u8 i;
	for(i=0;i<100 -3;i++){
		if(memcmp(mstxt+i,"key",3) == 0){
			memcpy(key_old,mstxt+i+3,6);
			memcpy(key,mstxt+i+10,6);
			return 0;
		}
	}
	return -1;
}

int pass_commond(void)
{
	u8 i;
	for(i=0;i<100 -3;i++){
		if(memcmp(mstxt+i,"on",2) == 0){
			shefang =1;
			return 0;
		}
		else if(memcmp(mstxt+i,"off",3) == 0){
			shefang =0;
			return 0;
		}
			
	}
	return -1;
}
#endif
#if 0
void phcall(void)
{
	u8 buff[20];
	u8 i;
	memset(buff,0,20);
	memcpy(buff,"ATD",3);
	memcpy(buff+3,phnum,phnum_length);
	USART_send_str(buff);
}
#endif
