#include "define.h"

//SPI initialize
// clock rate: 2764749hz
void spi_init(void)
{
	 SPCR = 0x50; //setup SPI
	 SPSR = 0x00; //setup SPI
}

void SPI_MasterInit(void)
{
	/* ����MOSI ��SCK Ϊ���������Ϊ���� */
	DDRB |= (1<<5)|(1<<7)|(1<<4);
	/* ʹ��SPI ����ģʽ������ʱ������Ϊfck/16 */
	SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0);
}
void SPI_MasterTransmit(u8 cData)
{
	/* �������ݴ��� */
	SPDR = cData;
	/* �ȴ�������� */
	while(!(SPSR & (1<<SPIF)))
	;
}


