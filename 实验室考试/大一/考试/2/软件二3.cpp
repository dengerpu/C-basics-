#include<stdio.h>
int main()
{
	int a[10],i,j,p;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[j]>a[i])
			{
				p=a[i];
				a[i]=a[j];
				a[j]=p;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	puts("");
	return 0;
}