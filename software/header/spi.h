#ifndef SPI_H
#define SPI_H

/***********************************************************
              ADXL345 �����Ĵ�������
************************************************************/
#define DEVID       0x00    //����ID
#define THRESH_TAP  0x1D    //�û���ֵ  

#define OFSX_ADDR        0x1E    //X��ƫ��
#define OFSY_ADDR        0x1F    //Y��ƫ��
#define OFSZ_ADDR        0x20    //Z��ƫ��
#define DUR_ADDR         0x21    //�û�����ʱ��
#define LATENT_ADDR      0x22    //�û���ʱ
#define WINDOW_ADDR      0x23    //�û�����
#define THRESH_ACT_ADDR  0x24    //���ֵ
#define THRESH_INACT_ADDR 0x25   //��ֹ��ֵ
#define TIME_INACT_ADDR  0x26    //��ֹʱ��
#define ACT_INACT_CTL_ADDR 0x27  //��ʹ�ܻ�;�ֹ���
#define THRESH_FF_ADDR   0x28    //����������ֵ
#define TIME_FF_ADDR     0x29    //��������ʱ��
#define TAP_AXES_ADDR    0x2A    //������˫�������
#define ACT_TAP_STATUS_ADDR 0x2B //������˫��Դ
#define BW_RATE_ADDR     0x2C    //���������빦��ģʽ����
#define POWER_CTL_ADDR   0x2D    //ʡ�����Կ���
#define INT_ENABLE_ADDR  0x2E    //�ж�ʹ�ܿ���
#define INT_MAP_ADDR     0x2F    //�ж�ӳ�����
#define INT_SOURCE_ADDR  0x30    //�ж�Դ
#define DATA_FORMAT_ADDR 0x31    //���ݸ�ʽ����
#define DATAX0_ADDR      0x32    //X������0
#define DATAX1_ADDR      0x33    //X������1
#define DATAY0_ADDR      0x34    //Y������0
#define DATAY1_ADDR      0x35    //Y������1
#define DATAZ0_ADDR      0x36    //Z������0
#define DATAZ1_ADDR      0x37    //Z������1
#define FIFO_CTL_ADDR    0x38    //FIFO����  
#define FIFO_STATUS_ADDR 0x39    //FIFO״̬

void SPI_MasterInit(void);

#endif
