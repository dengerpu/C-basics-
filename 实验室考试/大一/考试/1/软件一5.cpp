#include<stdio.h>
int main()
{
	int a,b,c,d,p;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(b>a)
	{
		p=a;
		a=b;
		b=p;
	}
	if(c>a)
	{
		p=a;
		a=c;
		c=p;
	}
	if(d>a)
	{
		p=a;
		a=d;
		d=p;
	}
	if(c>b)
	{
		p=b;
		b=c;
		c=p;
	}
	if(d>b)
	{
		p=b;
		b=d;
		d=p;
	}
	if(d>c)
	{
		p=d;
		d=c;
		c=p;
	}
	printf("%d %d %d %d\n",a,b,c,d);
	return 0;
}