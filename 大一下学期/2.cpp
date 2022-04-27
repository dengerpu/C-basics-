/*2. 编写函数：判断输入的数x是否存在，如果存在，则输出“m=x,index=”，否则输出“not be found!”。 （不允许修改main函数）
如输入7，则输出“m=7,index=3”。*/
#include <stdio.h>
#define N 10
int fun(int a[],int m)
{
	//
	int i,j,k=0;
	for(i=0;i<10;i++)
	{
		if(a[i]==m)
			j=i;
		
	}
	if(j>=0)
		k=1;
	return j+1;
}
//
int main()
{
	int i,a[N]={-3,4,7,9,13,45,67,89,100,180},k,m;
	printf("a数组中的数据如下：");
	for(i=0;i<N;i++) printf("%d ",a[i]);
	printf("enter m:");
	scanf("%d",&m);
	k=fun(a,m);
	if (k>0)
		printf("m=%d,index=%d\n",m,k);
	else
		printf("not be found!\n");
	return 0;
}