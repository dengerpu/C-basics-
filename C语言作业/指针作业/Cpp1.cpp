/*1、编写函数，一个班20个学生，求成绩数组中的平均成绩和低于平均成绩的人数。*/
#include<stdio.h>
int main()
{
	int i,count=0;
	float sum=0,aver;
	float a[20],*p;
	printf("请输入20个人的成绩\n");
	for(p=a;p<a+20;p++)
		scanf("%f",p);
	p=a;
	for(i=0;i<20;i++)
		sum+=*(p+i);
	aver=(1.0*sum)/20;
	for(i=0;i<20;i++)
		if(*(p+i)<aver)
			count++;
		printf("平均成绩:%f\n",aver);
		printf("低于平均成绩的人数:%d\n",count);
		return 0;
}