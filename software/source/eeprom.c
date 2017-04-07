#include "define.h"

void EEPROM_write_byte(u16 uiAddress,u8 ucData)
{
	/*等待上一次写操作结束*/
	while(EECR &(1<<EEWE));
	/*设置地址和数据寄存器*/
	EEAR=uiAddress;
	EEDR=ucData;
	/*置位EEMWE*/
	EECR|=(1<<EEMWE);
	/*置位EEWE?以启动写操作*/
	EECR|=(1<<EEWE);
}
u8 EEPROM_read_byte(u16 uiAddress)
{
	/*等待上一次写操作结束*/
	while(EECR & (1<<EEWE));
	/*设置地址寄存器*/
	EEAR = uiAddress;
	/*设置EERE?以启动读操作*/
	EECR|=(1<<EERE);
	/*自数据寄存器返回数据*/
	return EEDR;
}
void EEPROM_write(u16 uiAddress,u8 *Data, int length)
{
	int i;
	for(i=0;i<length;i++){
		EEPROM_write_byte(uiAddress+i,Data[i]);
	}
}
void EEPROM_read(u16 uiAddress,u8 *Data, int length)
{
	int i;
	for(i=0;i<length;i++){
		Data[i] = EEPROM_read_byte(uiAddress+i);
	}
}


