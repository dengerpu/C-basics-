#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int a[100][100]={0},i,l,j,n,b=1,w=1,sum=0;
	scanf("%d",&n);
	int p=n/2,q=n/2;
	a[p][q]=b++;
	for(i=1;i<=n;i++)
	{
		if(w==1)
		{
			for(l=1;l<=i;l++)
				a[p][++q]=b++;
			for(l=1;l<=i;l++)
				a[--p][q]=b++;
			w=-w;
		}
		else if(w==-1)
		{
			for(l=1;l<=i;l++)
				a[p][--q]=b++;
			for(l=1;l<=i;l++)
				a[++p][q]=b++;
			w=-w;
		}	
	}
	for(p=0;p<n;p++)
	{
		for(q=0;q<n;q++)
			printf("%d ",a[p][q]);
		puts("");
	}
	p=n/2,q=n/2;
	sum=a[p][q];
	for(j=1;j<n/2+1;j++)
		sum=sum+a[n/2-j][n/2-j]+a[n/2-j][n/2+j]+a[n/2+j][n/2-j]+a[n/2+j][n/2+j];
	printf("%d\n",sum);
	return 0;
}