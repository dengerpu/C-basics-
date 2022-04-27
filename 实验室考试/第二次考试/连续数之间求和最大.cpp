#include<stdio.h>
int main()
{
	int i,j,k,n,t=0,max;
	int a[100],sum[100000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
		for(j=0;j<n;j++)
		{
			for(k=j;k<j+i&&k<n;k++)
				sum[t]+=a[k];
			t++;
		}
		max=sum[0];
		for(i=0;i<t;i++)
			if(sum[i]>max)
				max=sum[i];
			printf("%d\n",max);
			return 0;
}