#include<stdio.h>
int main()
{
	int n,i,count,a[100],k=0,m;
	scanf("%d%d",&n,&m);
	for(i=0;i<=n;i++)
		a[i]=0;
	for(i=1;i<=n;i++)
		a[i]=i;
	count=n;
	i=1;
	while(count>1)
	{
		if(a[i]!=0)
			k++;
		if(k==m)
		{
			count--;
			a[i]=0;
			k=0;
		}
		i++;
		if(i==n+1)
			i=1;
	}
	for(i=1;i<=n;i++)
		if(a[i]!=0)
			printf("%d\n",i);
		return 0;
}