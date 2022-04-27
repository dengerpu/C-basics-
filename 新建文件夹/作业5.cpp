//5、编写程序求任意三个正整数的最小公倍数。
#include<stdio.h>
int shu(int a,int b)
{
	int m,i,t,c;
	if(b>a)
	{
		t=b;
		b=a;
		a=t;
	}
	m=a*b;
	for(i=b;i>=2;i--)
	{
		if(a%i==0&&b%i==0)
			break;
	}
	c=m/i;
	return c;
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	shu(a,b);
	shu(shu(a,b),c);
	printf("%d\n",shu(shu(a,b),c));
	return 0;
}