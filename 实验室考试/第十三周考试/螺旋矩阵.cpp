#include<stdio.h>
void main()
{
	int n,i,j,k,m=1,a[10][10];
	scanf("%d",&n);
	for(k=1;k<=n/2;k++)
	{
		for(j=k;j<=n+1-k;j++)
			a[k][j]=m++;
		for(j=k+1;j<=n-k+1;j++)
			a[j][n+1-k]=m++;
		for(j=n-k;j>=k;j--)
			a[n+1-k][j]=m++;
		for(j=n-k;j>k;j--)
			a[j][k]=m++;
		if(n%2==1)
			a[(n+1)/2][(n+1)/2]=m;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%3d ",a[i][j]);
		printf("\n");
	}
}