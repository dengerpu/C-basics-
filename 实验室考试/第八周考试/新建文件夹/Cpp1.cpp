#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n,i,count=0;
	int a[100],b[1001]={0};   //切记b组数字全部初始化为0
	srand(time(NULL));  //产生以时间为种子的随机数，每次运行产生的数不一样
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=rand()%1000+1;   //rand()%x+y   产生随机数的范围 【y,x+y);
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
		b[a[i]]=1;
	for(i=0;i<=1000;i++)
		if(b[i]==1)
			count++;
		printf("%d\n",count);
		for(i=0;i<=1000;i++)
			if(b[i]==1)
				printf("%d ",i);
			printf("\n");
			return 0;
}