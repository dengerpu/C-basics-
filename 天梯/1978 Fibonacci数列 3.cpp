/*쳲��������������������У�

  f1 = 1
  
	f2 = 1
	
	  f3 = 2
	  
		f4 = 3
		
		  ....
		  
			fn = fn-1 + fn-2
			
			  
				
				  ����һ������n
				  
					��fn
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