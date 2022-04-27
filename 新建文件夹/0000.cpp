#include<stdio.h>
int monkey(int);  //函数原型声明
void main()
{
	int day;
		printf("求第几天开始时候的桃子数？\n");
	do
	{
		scanf("%d",&day);
		if(day<1||day>10)
			continue;
		else
			break;
		
	}while(1);
	printf("total: %d\n",monkey(day));
}
//以下是求桃子数的函数
int monkey(int k)
{
	int i,m,n;
	for(n=1,i=1;i<=10-k;i++)
	{
		m=2*n+2;
		n=m;
	}
	return n;
}