/*斐波那契数列（Fibonacci sequence），又称黄金分割数列、
因数学家列昂纳多·斐波那契（Leonardoda Fibonacci）以兔
子繁殖为例子而引入，故又称为"兔子数列"，指的是这样一个数列：1、1、2、3、5、8、13、21、34
斐波那契数列，输入n的值，求出斐波那契数列中的第n个数；
*/
#include<stdio.h>
int f(int n)
{
	if(n==1||n==2)
		return 1;
	else
		return f(n-1)+f(n-2);
}
int main()
{
	int n;
	printf("请输入n的值\n");
	scanf("%d",&n);
	printf("%d\n",f(n));
	return 0;
}