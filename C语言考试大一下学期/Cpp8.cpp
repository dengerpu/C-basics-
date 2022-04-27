/*8、利用递归方法求10个任意整数实数的最大值。
输入数据：1  2  3  4  5  6  7  8  10  9
输出数据：10
*/
#include<stdio.h>
void main()
{ 
int i,a[10];
int aver(int [],int);
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("%d\n",aver(a,10));
}
int aver(int a[],int n)
{
 if(n==1)
	 return a[0];
 else
	 return (a[n-1]>aver(a,n-1)?a[n-1]:aver(a,n-1));
}