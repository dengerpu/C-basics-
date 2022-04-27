/*假如有个文件"二分法求解.c"， 二分法求解时精确度到 。内容是求 =2在区间[1,3]上的实数解。
开头程序如下：*/
#include<stdio.h>
#include<math.h>
int main()
{
	double a=1,b=3,m,y;
	m=(a+b)/2.0;
	do
	{
		y=exp(m)-sin(m)-sqrt(m)-2;
		if(y>0)
		{
			b=m;
			m=(a+b)/2;
		}
		else
		{
		a=m;
		m=(a+b)/2;
		}
	}while(fabs(y)>pow(10,-10));
	printf("%f",m);
}
