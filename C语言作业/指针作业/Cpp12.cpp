/*12、
编写函数：移动一维数组中的内容；若数组中有n个整数，要求把下标从0到p（含p，p小于等于n-1）的数组元素平移到数组的最后，如
1,2,3,4,5,6,7,8,9,10；p的值为3，则移动后一维数组的内容为：5,6,7,8,9,10,1,2,3,4。
*/
#include <stdio.h>
#define N 80
void fun1(int *w,int n)
{
	int t=*w,i;
	for(i=0;i<n;i++)
		w[i]=w[i+1];
	w[i-1]=t;
}
void fun(int *w,int p,int n)
{
	int i;
	if(p<=n-1)
	{
	for(i=0;i<=p;i++)
		fun1(w,n);
	}
}
void main()
{
    int a[N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int i,p,n=15;
	printf("the original data:\n");
	for(i=0;i<n;i++)
		printf("%3d",a[i]);
	printf("\n\n enter p:");
	scanf("%d",&p);
	fun(a,p,n);
	printf("\n the data after moving:\n");
	for(i=0;i<n;i++)
		printf("%3d",a[i]);	
	printf("\n");	
}