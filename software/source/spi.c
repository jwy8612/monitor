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
	/* 设置MOSI 和SCK 为输出，其他为输入 */
	DDRB |= (1<<5)|(1<<7)|(1<<4);
	/* 使能SPI 主机模式，设置时钟速率为fck/16 */
	SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0);
}
void SPI_MasterTransmit(u8 cData)
{
	/* 启动数据传输 */
	SPDR = cData;
	/* 等待传输结束 */
	while(!(SPSR & (1<<SPIF)))
	;
}


