#ifndef EEPROM1_H
#define EEPROM1_H
void EEPROM_write_byte(u16 uiAddress,u8 ucData);
void EEPROM_read(u16 uiAddress,u8 *Data, int length);
void EEPROM_write(u16 uiAddress,u8 *Data, int length);
u8 EEPROM_read_byte(u16 uiAddress);


#endif

