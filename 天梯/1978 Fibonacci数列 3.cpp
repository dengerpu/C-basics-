/*斐波纳契数列是这样的数列：

  f1 = 1
  
	f2 = 1
	
	  f3 = 2
	  
		f4 = 3
		
		  ....
		  
			fn = fn-1 + fn-2
			
			  
				
				  输入一个整数n
				  
					求fn
*/
#include<stdio.h>
int f(int n)
{
	if(n==1||n==2)
	{
	return 1;
	}
	else
		return f(n-1)+f(n-2);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
	return 0;
}