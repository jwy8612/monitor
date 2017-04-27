#ifndef SPI_H
#define SPI_H

/***********************************************************
              ADXL345 器件寄存器定义
************************************************************/
#define DEVID       0x00    //器件ID
#define THRESH_TAP  0x1D    //敲击阈值  

#define OFSX_ADDR        0x1E    //X轴偏移
#define OFSY_ADDR        0x1F    //Y轴偏移
#define OFSZ_ADDR        0x20    //Z轴偏移
#define DUR_ADDR         0x21    //敲击持续时间
#define LATENT_ADDR      0x22    //敲击延时
#define WINDOW_ADDR      0x23    //敲击窗口
#define THRESH_ACT_ADDR  0x24    //活动阈值
#define THRESH_INACT_ADDR 0x25   //静止阈值
#define TIME_INACT_ADDR  0x26    //静止时间
#define ACT_INACT_CTL_ADDR 0x27  //轴使能活动和静止检测
#define THRESH_FF_ADDR   0x28    //自由落体阈值
#define TIME_FF_ADDR     0x29    //自由落体时间
#define TAP_AXES_ADDR    0x2A    //单击或双击轴控制
#define ACT_TAP_STATUS_ADDR 0x2B //单击或双击源
#define BW_RATE_ADDR     0x2C    //数据速率与功率模式控制
#define POWER_CTL_ADDR   0x2D    //省电特性控制
#define INT_ENABLE_ADDR  0x2E    //中断使能控制
#define INT_MAP_ADDR     0x2F    //中断映射控制
#define INT_SOURCE_ADDR  0x30    //中断源
#define DATA_FORMAT_ADDR 0x31    //数据格式控制
#define DATAX0_ADDR      0x32    //X轴数据0
#define DATAX1_ADDR      0x33    //X轴数据1
#define DATAY0_ADDR      0x34    //Y轴数据0
#define DATAY1_ADDR      0x35    //Y轴数据1
#define DATAZ0_ADDR      0x36    //Z轴数据0
#define DATAZ1_ADDR      0x37    //Z轴数据1
#define FIFO_CTL_ADDR    0x38    //FIFO控制  
#define FIFO_STATUS_ADDR 0x39    //FIFO状态

void SPI_MasterInit(void);

#endif
