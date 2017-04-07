#include "define.h"
#include "uart.h"
#include "string.h"
#include "eeprom1.h"

extern u8 okflag;
extern u8 errflag;
extern u8 readflag;
extern u8 phnum[12];
extern u8 mstxt[100];
extern u8 key[10];
extern u8 key_old[10];
extern u8 shefang;

void send_message(char * str)
{
;
}
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

void phcall(void)
{
	u8 buff[20];
	u8 i;
#if TEST
	phnum[]="13520813263";
#else
	EEPROM_read(phnum_addr,phnum,phnum_length);
	memcpy(buff,"ATD",3);
	strcpy(buff+3,phnum);
	USART_send_str(buff);
#endif
	
}
