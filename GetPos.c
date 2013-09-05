#include "stm32f4xx_it.h"

uint8_t*USBD_HID_GetPos()
{
	static int x=256,y=0;
	static int8_t b[4];
	b[0]^=1,x+=b[1]=y>>4,y+=b[2]=-x>>4;
	return (uint8_t*)b;
}
