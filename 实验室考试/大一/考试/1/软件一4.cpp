#include<stdio.h>
int main()
{
	int year,month,day;
	int days = 0;
	scanf("%d%d%d",&year,&month,&day);
	days += day;
	switch(month)
	{
	case 12:
		days+=30;
	case 11:
		days+=31;
	case 10:
		days+=30;
	case 9:
		days+=31;
	case 8:
		days+=31;
	case 7:
		days+=30;
	case 6:
		days+=31;
	case 5:
		days+=30;
	case 4:
		days+=31;
	case 3:if(((year%4==0&&year%100!=0)||year%400==0))
	          days+=29;
	       else
		      days+=28;
	case 2:
		days+=31;
	}
	
	printf("%d\n",days);
	return 0;
}
