/*5、编程：完成函数，实现在屏幕上模拟显示一个动态数字式时钟，即实时显示系统时间（如11:22:35）。*/
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
//初始化数字化时钟
void initclock(CLOCK *myclock,int x,int y,int z)
{
	myclock->hour=x;
	myclock->minute=y;
	myclock->second=z;
}
//时间更新函数
void update(CLOCK *myclock)
{
	
	
	
	
}
//显示时间
void display(CLOCK *myclock)
{ 
	printf("%2d:%2d:%2d\r", myclock->hour, myclock->minute, myclock->second); //利用\r实现了动态刷新显示
}
int main()
{
	CLOCK myclock;
	long i;
	//获取系统时间
	time_t t;
	struct tm *lt;
	time(&t); //获取时间戳
	lt=localtime(&t); //转化为时间结构
	initclock(&myclock,lt->tm_hour,lt->tm_min,lt->tm_sec);//数字化时钟显示初始时间设置为系统当前时间
	for (i = 0; i < 100000; i++) 
	{ 
		update(&myclock); /*时钟更新*/
		display(&myclock); /*时间显示*/
		Sleep(1000);/*延时1秒,包含在window.h*/
	}
	return 0;
}