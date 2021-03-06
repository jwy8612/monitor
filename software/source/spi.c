#include "define.h"

void cs(u8 enble){
	if(enble){
		PORTB |=1<<4;
	}
	else{
		DDRB&=~(1<<4);
	}
}

void SPI_MasterInit(void)
{
	/* 设置MOSI 和SCK 为输出，其他为输入 */
	DDRB |= (1<<5)|(1<<7)|(1<<4);
	/* 使能SPI 主机模式，设置时钟速率为fck/16 */
	SPCR = (1<<SPE)|(1<<MSTR)|(1<<CPOL)|(1<<CPHA)|(1<<SPR0);
	
	SPSR = 0x00; //setup SPI
	DDRB |=1<<4;
	DDRB |=1<<5;
	DDRB&=~(1<<6);
	DDRB |=1<<7;
	cs(1);
	
}
void SPI_MasterTransmit(u8 cData)
{
	/* 启动数据传输 */
	SPDR = cData;
	/* 等待传输结束 */
	while(!(SPSR & (1<<SPIF)))
	;
}

u8 ADXL345_Read(u8 addr){
	u8 data;
	cs(1);
	addr |=0x80;
	addr &=0xbf;
	SPI_MasterTransmit(addr);
	SPI_MasterTransmit(0xff);
	data = SPDR;
	cs(0);
	return data;	
}
void ADXL345_Write(u8 addr, u8 data){
	cs(1);
	addr &=~0x7f;
	addr &=0xbf;
	SPI_MasterTransmit(addr);
	SPI_MasterTransmit(data);
	cs(0);
}

void ADXL345_Init(){
	;
    while(ADXL345_Read(0x00) != DeviceID);
	ADXL345_Write(THRESH_ACT_ADDR,0x10);   //活动阈值g
	ADXL345_Write(ACT_INACT_CTL_ADDR,0b01110000);   //直流耦合,xyz使能运动中断
	ADXL345_Write(BW_RATE_ADDR,0x0a);	//速率设定为100Hz, 低速率模式，参考pdf13页
	ADXL345_Write(THRESH_ACT_ADDR,0x10);   //活动阈值g
	ADXL345_Write(THRESH_ACT_ADDR,0x10);   //活动阈值g
	ADXL345_Write(THRESH_ACT_ADDR,0x10);   //活动阈值g
	ADXL345_Write(THRESH_ACT_ADDR,0x10);   //活动阈值g
    
     ADXL345_Write(DATA_FORMAT_ADDR,0x0B);   //测量范围,正负16g，13位模式
     ADXL345_Write(OFSX_ADDR,0x00);   //X 偏移量 根据测试传感器的状态写入pdf29页
     ADXL345_Write(OFSY_ADDR,0x05);   //Y 偏移量 根据测试传感器的状态写入pdf29页
     ADXL345_Write(OFSZ_ADDR,0x09);   //Z 偏移量 根据测试传感器的状态写入pdf29页
    
     ADXL345_Write(THRESH_ACT_ADDR,0x0f);    //活动阈值设定
     ADXL345_Write(ACT_INACT_CTL_ADDR,0x90);     //交流耦合检测，只检查Z轴   
     ADXL345_Write(INT_MAP_ADDR,0x0);
     ADXL345_Write(INT_ENABLE_ADDR,0x10);    //加速度中断使能 , INT1引脚, 上升沿有效
    
    SetADXL_TriggerMode();
    
     ADXL345_Write(POWER_CTL_ADDR,0x08);
     ADXL345_Read(INT_SOURCE_ADDR);  //清空器件的中断标志
     ADXL345_Read(FIFO_STATUS_ADDR);
}

