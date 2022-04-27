#include<stdio.h>
struct date
{
	int year;
	int month;
	int day;
}days;
int s(int year,int month,int day)
{
	int i,a=0,b[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=1;i<month;i++)
		a+=b[i];
	a+=day;
	if((year%400==0||year%4==0&&year%100!=0)&&month>=3)
		a+=1;
	return a;
}
int main()
{
	int a;
	scanf("%d%d%d",&days.year,&days.month,&days.day);
	a=s(days.year,days.month,days.day);
	printf("%d\n",a);
	return 0;
}