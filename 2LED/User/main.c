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
    RCC_APB2ENR |=1<<6; //����GPIO_Eʱ��
	GPIOE_CRL &=~(0x0f<<(4*5));//ǰ��λ����
	GPIOE_CRL |=(3<<(4*5));
//	GPIOE_BSRR=(1<<(16+5));   //����LED
	while(1)
	{
	GPIOE_BSRR=(1<<(16+5));   //����LED
	delay(0xfffff);
	GPIOE_BSRR=(1<<(5));   //Ϩ��LED
    delay(0xfffff);		
	}
	
}




