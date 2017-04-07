#include "define.h"

void EEPROM_write_byte(u16 uiAddress,u8 ucData)
{
	/*�ȴ���һ��д��������*/
	while(EECR &(1<<EEWE));
	/*���õ�ַ�����ݼĴ���*/
	EEAR=uiAddress;
	EEDR=ucData;
	/*��λEEMWE*/
	EECR|=(1<<EEMWE);
	/*��λEEWE?������д����*/
	EECR|=(1<<EEWE);
}
u8 EEPROM_read_byte(u16 uiAddress)
{
	/*�ȴ���һ��д��������*/
	while(EECR & (1<<EEWE));
	/*���õ�ַ�Ĵ���*/
	EEAR = uiAddress;
	/*����EERE?������������*/
	EECR|=(1<<EERE);
	/*�����ݼĴ�����������*/
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


