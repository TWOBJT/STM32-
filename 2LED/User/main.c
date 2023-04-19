#include "stm32f10x.h"
 
typedef unsigned int u32; 


 void  SystemInit ()
{

	
	
}
void delay(u32 i)
{
while(i--);
}

int main()
{
    RCC_APB2ENR |=1<<6; //开启GPIO_E时钟
	GPIOE_CRL &=~(0x0f<<(4*5));//前四位清零
	GPIOE_CRL |=(3<<(4*5));
//	GPIOE_BSRR=(1<<(16+5));   //点亮LED
	while(1)
	{
	GPIOE_BSRR=(1<<(16+5));   //点亮LED
	delay(0xfffff);
	GPIOE_BSRR=(1<<(5));   //熄灭LED
    delay(0xfffff);		
	}
	
}




