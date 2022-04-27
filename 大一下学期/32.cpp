/*32. 编写完成fun函数实现如下功能：从键盘输入任意一个正整数，求出它的非偶数因子，并按从小到大的顺序放在pp所指的数组中，这些因子的个数通过形参n返回。（不允许修改main函数）
如输入27，输出为：the result is :3 9*/
#include<stdio.h>
int main()
{
	void  fun (int x,int *pp, int *n);
	int x,a[100],*pp=a,n,i;
	scanf("%d",&x);
	fun(x,pp,&n);
	printf("the result is :");
    for(i=0;i<n;i++)
		printf("%d ",pp[i]);
	printf("\n");
	return 0;
}
void  fun (int x,int *pp, int *n)
{
	int i,j=0;
	for(i=3;i<x;i=i+2)
		if(x%i==0)
		{
			*(pp+j)=i;
			j++;
		}
		*n=j;
}