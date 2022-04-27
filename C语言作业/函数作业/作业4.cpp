//4、编程求1/1！+1/2！+1/3！+1/4！，结果保留5位小数。
#include<stdio.h>
float jcqh(int n)
{
	int i,j,a=1;
	float sum=0.0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			a=a*j;
		sum=sum+1.0/a;
	}
	return sum;
}
int main()
{
	float m;
	m=jcqh(4);
	printf("%.5f\n",m);
	return 0;
}