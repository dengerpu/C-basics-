/*同学们在做题时常遇到这种函数

  f(x)=5 (x>=0)
  
	f(x)=f(x+1)+f(x+2)+1 (x<0)
	
下面就以这个函数为题做一个递归程序吧*/
#include<stdio.h>
int f(int x)
{
	if(x>=0)
		return 5;
	else
		return (f(x+1)+f(x+2)+1);
}
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d\n",f(x));
	return 0;
}