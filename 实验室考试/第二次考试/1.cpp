#include<stdio.h>
int main()
{
	int n,k,a,b,i,j;
	scanf("%d%d",&n,&k);
	a=n;
	for(i=n-1;i>=n-k+1;i--)
		a=a*i;
	b=k;
	for(j=k-1;j>=1;j--)
		b=b*j;
	printf("%d\n",a/b);
	return 0;
}