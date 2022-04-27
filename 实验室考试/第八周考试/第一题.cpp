#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int a[100],b[1000]={0};
	int i,n,count=0;
	scanf("%d",&n);
	srand(time(NULL));  
	for(i=0;i<n;i++)
	{
		a[i]=rand()%1000+1;
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
		b[a[i]]=1;
	for(i=1;i<=1000;i++)
		if(b[i]==1)
			count++;
		printf("%d\n",count);
		for(i=0;i<=1000;i++)
			if(b[i]==1)
				printf("%d ",i);
			printf("\n");			
}