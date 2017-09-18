#include "LED.h"
void LED_Initial(void)
{
  P1SEL &= ~0x03;   //���� P1_0 = 0  P1_1 = 0 Ϊͨ�� I/O
  P1DIR |= 0x03;    //���� P1_0 = 1  P1_1 = 1 Ϊ���״̬
  LED1= 0;          //��ʼ�� LED1 Ϊ��
  LED2= 0;          //��ʼ�� LED2 Ϊ��
}
void LED1_toggle(void)
{
  LED1=!LED1;
}
void LED2_toggle(void)
{
  LED2=!LED2;
}
void Delay_ms(unsigned int z)
{
  unsigned int x,y;
  for(x=z;x>0;x--)
     for(y=220;y>0;y--);
}