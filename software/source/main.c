#include "define.h"
#include "uart.h"
#include "eeprom1.h"
#include "string.h"


u8 okflag;
u8 errflag;
u8 readflag;
u8 keyflag;
u8 key[10];
u8 key_old[10];
u8 phnum[12];
u8 mstxt[100];
u8 shefang;
u8 newms;
void AT_init(void)
{
	okflag = 0;
	USART_send_str("AT+CMGF=1");//设置TXT 格式
	while(!okflag);
	okflag = 0;
	USART_send_str("ATS0");//设置自动接听
	while(!okflag);
	
}
void main(void )
{
	init_devices();
	AT_init();
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
}
