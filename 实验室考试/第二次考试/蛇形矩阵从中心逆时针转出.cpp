#include<stdio.h>
int main()
{
	int n,b=1,i,j,a[100][100],w=1,p,q,sum=0;
	scanf("%d",&n);
	a[n/2][n/2]=b;
	p=n/2;
	q=n/2;
	for(i=1;i<=n;i++)
	{	
		if(w==1)
		{
			for(j=1;j<=i;j++)
				a[p][q++]=b++;
			for(j=1;j<=i;j++)
				a[p--][q]=b++;
			w=-w;
		}
		else
			if(w==-1)
			{
				for(j=1;j<=i;j++)
					a[p][q--]=b++;
				for(j=1;j<=i;j++)
					a[p++][q]=b++;
				w=-w;
			}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%-4d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<n;i++)    //求对角线之和方法.1		
		for(j=0;j<n;j++)
			if(i==j)
				sum+=a[i][j];
			for(i=0,j=n-1;i<n,j>=0;i++,j--)
				sum+=a[i][j];
			printf("%d\n",sum-a[n/2][n/2]);
			return 0;
}
//  求对角线方法之和  2
/*
p=n/2;
for(j=1;j<n/2+1;j++)
sum+=a[p-j][p-j]+a[p+j][p+j]+a[p+j][p-j]+a[p-j][p+j];
*/