/*1、打鱼晒网问题。
"三天打鱼两天晒网"。某人从1990年1月1日起开始"三天打鱼两天晒网"，问这个人在以后的某一天中是"打鱼"还是"晒网"*/
#include<stdio.h>
int dayushaiwang(int year,int month,int day)
{
	int s=0,i;
	switch(month)
	{
	case 12:s+=30;
	case 11:s+=31;
	case 10:s+=30;
	case 9:s+=31;
	case 8:s+=31;
	case 7:s+=30;
	case 6:s+=31;
	case 5:s+=30;
	case 4:s+=31;
	case 3:s+=28;
	case 2:s+=31;break;
	}
	s+=day;
	for(i=1990;i<year;i++)
	{
		if((year%400==0)||(year%4==0&&year%100!=0))
			s+=366;
		else
			s+=365;
	}
	if(s%5==0||s%5==4)
		printf("晒网\n");
	else
		printf("打鱼\n");
	return 0;	
}
int main()
{
	int year,month,day;
	printf("请输入年月日:\n");
	scanf("%d%d%d",&year,&month,&day);
	dayushaiwang(year,month,day);
	return 0;
}