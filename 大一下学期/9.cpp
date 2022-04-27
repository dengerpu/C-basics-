/*9. 利用递归方法求10个任意整数实数的最大值。（不允许修改main函数）
如：输入1  2  3  4  5  10  7  8  9  6时，输出为10。00。*/
#include<stdio.h>
float aver(float a[],int n);
float a[10];
void main()
{ 
	int i;
	for(i=0;i<10;i++)
		scanf("%f",&a[i]);
	printf("%.2f\n",aver(a,10));
}
float aver(float a[],int n)
{
	//
	if(n==1)
		return a[n];
	else
		return a[n-1]>aver(a,n-1)?a[n-1]:aver(a,n-1);
	//
}