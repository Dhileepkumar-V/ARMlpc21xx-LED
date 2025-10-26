#include<lpc21xx.h>
void delay()
{
 T0PR=15000000-1;
	T0TCR=0x01;
	while(T0TC<1);
		T0TCR|=0X2;
	T0TCR = 0X00;
}

int main()
{
  IODIR0=1;
	IOSET0=1;
	while(1)
	{
	IOCLR0=1;
	delay();
	IOSET0=1;
	delay();
	}
}