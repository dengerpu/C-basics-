/*21、
编程：完成subtract函数，实现对计算任意两个24小时制的时间差。
输入数据：11:12:23 10:10:18
输出数据：1:2:5
*/
#include <stdio.h>
#include <string.h>
typedef struct
{
	int second;
	int minute;
	int hour;
}Time;
void swap(Time *time1,Time *time2)
{
	//确保第一个时间比第二个时间大
	if((time2->hour>time1->hour)||((time2->hour==time1->hour)&&(time2->minute>time1->minute))||((time2->hour==time1->hour)&&(time2->minute==time1->minute)&&(time2->second>time1->second)))
	{
		Time tmp;
		tmp=*time1;
		*time1=*time2;
		*time2=tmp;
	}
}
Time subtract(Time time1,Time time2)
{
	Time time3;
	if(time1.second <time2.second )
	{
		if(time1.minute ==0)
		{
			time1.minute +=60;
			if(time1.hour ==0)
				time1.hour +=24;
			time1.hour -=1;
		}
		time1.minute -=1;
		time3.second =time1.second +60-time2.second ;
	}
	else
		time3.second =time1.second -time2.second ;
	if(time1.minute <time2.minute )
	{
		if(time1.hour ==0)
			time1.hour +=24;
		time1.hour -=1;
		time3.minute =time1.minute +60-time2.minute ;
	}
	else
		time3.minute =time1.minute -time2.minute ;
	if(time1.hour <time2.hour )
	{
		time1.hour +=24;
		time3.hour =time1.hour -time2.hour ;
	}
	else
		time3.hour =time1.hour -time2.hour ;
	return time3;
}
void printtime(Time time)
{
	printf("%d:%d:%d",time.hour,time.minute,time.second);
}
int main()
{
	Time time1;
	Time time2;
	Time time3;
	char ch;
	printf("输入两个时间：");
	scanf("%d:%d:%d %d:%d:%d",&time1.hour,&time1.minute,&time1.second,&time2.hour,&time2.minute,&time2.second);  
	swap(&time1,&time2);
	time3=subtract(time1,time2);
	printtime(time3);
	printf("\n");
	return 0;
}