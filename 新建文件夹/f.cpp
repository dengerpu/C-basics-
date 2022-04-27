#include<stdio.h>
int f(int n)
{
	if(n==0||n==1)
		return n;
	else
	{
		int x=0,y=1,z,i;
		for(i=0;i<n;i++)
		{
			z=y;
			y=x+y;
			x=z;
		}
		return n=y;
	}
}
void main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
}