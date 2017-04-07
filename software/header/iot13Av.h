#ifndef __iot13Av_h
#define __iot13Av_h

/* ATtiny13A register and bit name header file
 * for ImageCraft ICCAVR compiler
 */

/* created 2008-06-04
 */

/* PRR */
#define	PRR 	(*(volatile unsigned char *)0x5C)
#define	 PRTIM0   1
#define	 PRADC    0

/* BODCR */
#define	BODCR	(*(volatile unsigned char *)0x50)
#define	 BODS     1
#define	 BODSE    0

/* */

#include <iot13v.h>

/* */

#endif
