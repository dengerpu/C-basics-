//6����д�ݹ麯����xn��ֵ��
#include<stdio.h>
double xn(double x,double n)
{
	double y;
	y=x*n;
	return y;
}
int main()
{
	double x,n;
	scanf("%f%f",&x,&n);
	printf("%f\n",xn(x,n));
	return 0;
}