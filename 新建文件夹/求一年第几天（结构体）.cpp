#include<stdio.h>
struct date
{
	int year;
	int month;
	int day;
}d;
int main()
{
	int days(int year,int month,int day);
	int a;
	scanf("%d%d%d",&d.year,&d.month,&d.day);
	a=days(d.year,d.month,d.day);
	printf("%d\n",a);
	return 0;
}
int days(int year,int month,int day)
{
	int i,a,b[13]={0,31,28,30,31,31,30,1,31,30,31,30,31};
	a=0;
	for(i=1;i<month;i++)
		a+=b[i];
	a+=day;
	if((year%4==0&&year%100!=0||year%400==0)&&month>=3)
		a+=1;
	return a;
}