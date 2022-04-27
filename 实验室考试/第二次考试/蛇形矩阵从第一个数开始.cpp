#include<stdio.h>
int main()
{
	int n,i,j,w=1,b,p,q;
	int a[100][100];
	scanf("%d",&n);
	b=n*n;
	p=n/2;
	q=n/2;
	a[p][q]=b;
	for(i=1;i<=n;i++)
	{
		if(w==1)
		{
			for(j=1;j<=i;j++)
				a[p][q--]=b--;
			for(j=1;j<=i;j++)
				a[p++][q]=b--;
			w=-w;
		}
		else if(w==-1)
		{
			for(j=1;j<=i;j++)
				a[p][q++]=b--;
			for(j=1;j<=i;j++)
				a[p--][q]=b--;
			w=-w;
		}
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%-4d",a[i][j]);
		printf("\n");
	}
		return 0;
	}
