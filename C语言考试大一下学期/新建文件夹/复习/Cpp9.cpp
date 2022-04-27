/*9、编程：完成avgint函数，利用递归法求一批数据的平均值。
输入数据：1 2 3 15 5 20 7 8 45 10
输出数据：the result data is :11.60
*/
#include <stdio.h>
float avgint(int a[],int n)
{
 if(n==1)
	 return a[0];
 else
	 return (a[n-1]+avgint(a,n-1)*(n-1))/n;
}
int main()
{
 int a[10],i;
 for(i=0;i<10;i++)
  scanf("%d",&a[i]);
 printf("the result data is :");
 printf("%.2f\n",avgint(a,10));
 return 0;
}