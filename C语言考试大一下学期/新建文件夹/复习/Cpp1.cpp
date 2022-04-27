/*1、编程程序：完成sort函数，实现10个任意整数数据的升序输出。
输入数据：10 9 8 7 6 5 4 3 2 1
输出数据：the result data is :1 2 3 4 5 6 7 8 9 10
*/
#include<stdio.h>
int main()
{
	int a[10],i; 
	void sort(int *,int);
	for(i=0;i<10;i++)
		scanf("%d",&a[i]); 
	sort(a,10);
	printf("\nthe result data is :");
	for(i=0;i<10;i++)
		printf("%d ",a[i]); 
	return 0;
} 
void sort(int *p,int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(p[i]>p[j])
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
			
}