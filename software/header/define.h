//ICC-AVR application builder : 2017/3/15 15:13:54
// Target : M16
// Crystal: 11.059Mhz

#include <iom16v.h>
#include <macros.h>

#define TEST 0


//#define CLOCK11059
#define CLOCK73728

//#define UART57600
#define UART115200
//#define UART9600
typedef unsigned char u8;
typedef unsigned int u16;

#define phnum_addr 0x00
#define phnum_length 11
#define key_addr 0x10
#define key_length 6
#define key_flag_addr 20
#define key_flag_length 1
#define userFlagAddr 0x100


enum STATUS{
	IDLE=0,
	RING=1,
	MSG=2,
	GPS=3,
	CALLING
};