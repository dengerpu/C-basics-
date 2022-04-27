#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i*2-1;k++)
		{
			printf("*");
		}
		puts("");
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=2*i+1;k<2*n;k++)
		{
			printf("*");
		}
		puts("");
	}
	return 0;
}