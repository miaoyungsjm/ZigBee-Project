#include "LED.h"

void LED_Initial(void)
{
  P1SEL &= ~0x03;   //���� P1_0 P1_1 Ϊ 0:ͨ�� I/O
  P1DIR |= 0x03;    //���� P1_0 P1_1 Ϊ 1:���״̬
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
void Delay_us(void) //1 us��ʱ
{
   MicroWait(1);   
}
void Delay_10us(void) //10 us��ʱ
{
  MicroWait(10);
}

void Delay_ms(int Time)//n ms��ʱ
{
  unsigned char i;
  while(Time--)
  {
    for(i=0;i<100;i++)
     Delay_10us();
  }
}