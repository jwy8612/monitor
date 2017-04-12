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
	/* ����MOSI ��SCK Ϊ���������Ϊ���� */
	DDRB |= (1<<5)|(1<<7)|(1<<4);
	/* ʹ��SPI ����ģʽ������ʱ������Ϊfck/16 */
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
	/* �������ݴ��� */
	SPDR = cData;
	/* �ȴ�������� */
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
	#if 0
    while(ADXL345_Read(0x00) != DeviceID);
    
    WriteADXL(DATA_FORMAT_ADDR,0x0B);   //������Χ,����16g��13λģʽ
    WriteADXL(BW_RATE_ADDR,0x1B);   //�����趨Ϊ100Hz, ������ģʽ���ο�pdf13ҳ
    WriteADXL(OFSX_ADDR,0x00);   //X ƫ���� ���ݲ��Դ�������״̬д��pdf29ҳ
    WriteADXL(OFSY_ADDR,0x05);   //Y ƫ���� ���ݲ��Դ�������״̬д��pdf29ҳ
    WriteADXL(OFSZ_ADDR,0x09);   //Z ƫ���� ���ݲ��Դ�������״̬д��pdf29ҳ
    
    WriteADXL(THRESH_ACT_ADDR,0x0f);    //���ֵ�趨
    WriteADXL(ACT_INACT_CTL_ADDR,0x90);     //������ϼ�⣬ֻ���Z��   
    WriteADXL(INT_MAP_ADDR,0x0);
    WriteADXL(INT_ENABLE_ADDR,0x10);    //���ٶ��ж�ʹ�� , INT1����, ��������Ч
    
    SetADXL_TriggerMode();
    
    WriteADXL(POWER_CTL_ADDR,0x08);
    Single_ReadADXL(INT_SOURCE_ADDR);  //����������жϱ�־
    Single_ReadADXL(FIFO_STATUS_ADDR);
#endif
}

