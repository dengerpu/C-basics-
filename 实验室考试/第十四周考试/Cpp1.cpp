/*�����и��ļ�"���ַ����.c"�� ���ַ����ʱ��ȷ�ȵ� ���������� =2������[1,3]�ϵ�ʵ���⡣
��ͷ�������£�*/
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
