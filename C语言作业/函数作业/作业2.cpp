/*2、车辆限行问题
安阳市从2017年11月15日开始车辆限行，限行时间为2017年11月15日（星期三）至2018年3月31日，法定节假日和公休日不限行。
限行办法：
每日限制两个车牌尾号的车辆通行。“尾号”即为机动车号牌末尾的数字
星期一：限行机动车车牌尾号为1和6；
星期二：限行机动车车牌尾号为2和7；
星期三：限行机动车车牌尾号为3和8；
星期四：限行机动车车牌尾号为4和9；
星期五：限行机动车车牌尾号为5和0。
编程：输入一个日期(年、月、日）和车牌号，判断“可以出行！”还是“禁止出行”。
注意：假设车牌号为5位整数
*/
#include<stdio.h>
int xianxing(int year,int month,int day,int a)
{
	int b=3,i,c,d=0;
	switch(month)
	{
	case 2:b+=31;
	case 1:b+=31;
	case 12:b+=30;break;
	}
	b+=day-15;
	c=a%10;
	if(c==0)
		c+=10;
	if(b%7==6||b%7==0)
		printf("可以出行\n");
	else
	{
		
		for(i=1;i<=5;i++)
		{
			if(b%7==i&&(c==i||c==5+i))
			{
				printf("禁止出行\n");
				d=1;
				break;
			}
		}
		if(d==0)
			printf("可以出行\n");
	}
return 0;
}
int main()
{
	int year,month,day,a;
	printf("请输入年月日和车牌号:\n");
	scanf("%d%d%d%d",&year,&month,&day,&a);
	if((year<2017&&month<11&&day<15)||(year>2018&&month>3))
		printf("这个时间安阳不限行\n");
	else
		xianxing(year,month,day,a);
	return 0;
}