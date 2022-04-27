#include<stdio.h>
int main()
{
	int i,j,k,base=1,n;
	int a[10][10]={1};
	scanf("%d",&n);
	for(k=0;k<n/2;k++)
	{
		for(i=k;i<=n-1-k;i++)
			a[k][i]=base++;
		for(j=k+1;j<n-1-k;j++)
			a[j][n-1-k]=base++;
		for(i=n-1-k;i>k;i--)
			a[n-1-k][i]=base++;
		for(j=n-1-k;j>k;j--)
			a[j][k]=base++;
		if(n%2==1)
			a[(n-1)/2][(n-1)/2]=base;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
	return 0;
}