//7,7 7,6 6,7 5,7 6,6 7,5
#include<stdio.h>
void main()
{
	int a[100][100];
	int m=1,i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1,k=i;k>=1,j<=i;j++,k--)
			if(i%2!=0)
				a[j][k]=m++;
			else
				a[k][j]=m++;
	}
	m=n*n;
	for(i=n;i>=2;i--)
	{
		for(j=n,k=i;k<=i,j>=i;j--,k++)
			if(n%2==0)
			{
				{
					if(i%2==0)
						a[j][k]=m--;
					else
						a[k][j]=m--;
				}
			}
			else
			{	
				if(i%2!=0)
					a[j][k]=m--;
				else
					a[k][j]=m--;
			}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
}
