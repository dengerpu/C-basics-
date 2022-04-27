/*我们要求找出具有下列性质数的个数(包含输入的自然数n):

  先输入一个自然数n(n<=1000),然后对此自然数按照如下方法进行处理:
  
	1.          不作任何处理;
	
	  2.          在它的左边加上一个自然数,但该自然数不能超过原数的一半;
	  
3.          加上数后,继续按此规则进行处理,直到不能再加自然数为止.*/

#include<stdio.h>
int f(int n,int &j)
{
	int i;
	for(i=1;i<=n/2;i++)
	{
		f(i,j);
		j++;
	}
	return j;
}
int main()
{
	int i,n,j=0;
	scanf("%d",&n);
	for(i=0;i<=n/2;i++)
	{
		j++;
		f(i,j);
	}
	printf("%d\n",j);
	return 0;
}