#include "define.h"

//UART0 initialize
// desired baud rate: 115200
// actual: baud rate:115198 (0.0%)
extern int doneFlag;
extern int startFlag;
extern u8 rIndex;

extern int cmdNum;
extern int cmdLength[8];

extern u8 *cmdPing;
extern u8 *cmdPong;
extern u8 *cmdbuff[4];
extern u8 msFlag;
//extern void led(int i,int enable);

void uart0_init(void)
{
	DDRD |= 1<<1; 
#ifdef CLOCK11059
#ifdef UART115200
	 UCSRB = 0x00; //disable while setting baud rate
	 UCSRA = 0x00;
	 UCSRC = BIT(URSEL) | 0x06;
	 UBRRL = 0x05; //set baud rate lo
	 UBRRH = 0x00; //set baud rate hi
	 UCSRB = 0x98;
#endif
#ifdef UART57600
	 UCSRB = 0x00; //disable while setting baud rate
	 UCSRA = 0x00;
	 UCSRC = BIT(URSEL) | 0x06;
	 UBRRL = 0x0B; //set baud rate lo
	 UBRRH = 0x00; //set baud rate hi
	 UCSRB = 0x98;
#endif
#endif
#ifdef CLOCK73728
#ifdef UART115200
	UCSRB = 0x00; //disable while setting baud rate
	UCSRA = 0x00;
	UCSRC = BIT(URSEL) | 0x06;
	UBRRL = 0x03; //set baud rate lo
	UBRRH = 0x00; //set baud rate hi
	UCSRB = 0x98;

#endif
#ifdef UART57600
	UCSRB = 0x00; //disable while setting baud rate
	UCSRA = 0x00;
	UCSRC = BIT(URSEL) | 0x06;
	UBRRL = 0x07; //set baud rate lo
	UBRRH = 0x00; //set baud rate hi
	UCSRB = 0x98;

#endif
#ifdef UART9600
UCSRB = 0x00; //disable while setting baud rate
UCSRA = 0x00;
UCSRC = BIT(URSEL) | 0x06;

UBRRL = 0x2F; //set baud rate lo
UBRRH = 0x00; //set baud rate hi
UCSRB = 0x98;

#endif
#endif
}

void USART_Transmit( unsigned char data )     //发送模块，该程序没用到
{
	/* Wait for empty transmit buffer */
	while( !( UCSRA & (1<<UDRE)))/* Put data into buffer, sends the data */
		;
	UDR = data;
}
void USART_send_str(unsigned char * str)		//发送字符串
{
	int i=0;
	while(*(str++)!= 0){
		USART_Transmit(*(str-1));
	}
	USART_Transmit('\r');
	USART_Transmit('\n');
}

#pragma interrupt_handler uart0_rx_isr:iv_USART0_RXC
void uart0_rx_isr(void)
{
	 //uart has received a character in UDR
	 static u8 preData = 0;
	 static int index=0;
	 
	 u8 data;
	 data = UDR;
	cmdbuff[rIndex][index]=data;
	index++;
	 if((0x0d==preData)&&(0x0a==data)){
		 doneFlag = 1;
	 }
	if(1==doneFlag){
		doneFlag =0;
		if( index-2>1){
			cmdLength[rIndex] = index-2;
			rIndex++;
			cmdNum++;
			
			if(4==rIndex){
			  rIndex = 0;
			}
		}
		index=0;
	}
	preData = data;
	if(0x3e==data){
		msFlag = 1;
	}
	 
}
