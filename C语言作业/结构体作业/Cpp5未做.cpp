/*5����̣���ɺ�����ʵ������Ļ��ģ����ʾһ����̬����ʽʱ�ӣ���ʵʱ��ʾϵͳʱ�䣨��11:22:35����*/
#include <stdio.h>
#include<windows.h>
#include <time.h>
struct clock
{
	int hour;
	int minute;
	int second;
};
typedef struct clock CLOCK;
//��ʼ�����ֻ�ʱ��
void initclock(CLOCK *myclock,int x,int y,int z)
{
	myclock->hour=x;
	myclock->minute=y;
	myclock->second=z;
}
//ʱ����º���
void update(CLOCK *myclock)
{
	
	
	
	
}
//��ʾʱ��
void display(CLOCK *myclock)
{ 
	printf("%2d:%2d:%2d\r", myclock->hour, myclock->minute, myclock->second); //����\rʵ���˶�̬ˢ����ʾ
}
int main()
{
	CLOCK myclock;
	long i;
	//��ȡϵͳʱ��
	time_t t;
	struct tm *lt;
	time(&t); //��ȡʱ���
	lt=localtime(&t); //ת��Ϊʱ��ṹ
	initclock(&myclock,lt->tm_hour,lt->tm_min,lt->tm_sec);//���ֻ�ʱ����ʾ��ʼʱ������Ϊϵͳ��ǰʱ��
	for (i = 0; i < 100000; i++) 
	{ 
		update(&myclock); /*ʱ�Ӹ���*/
		display(&myclock); /*ʱ����ʾ*/
		Sleep(1000);/*��ʱ1��,������window.h*/
	}
	return 0;
}