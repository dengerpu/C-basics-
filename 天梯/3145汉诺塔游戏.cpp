/*汉诺塔问题（又称为河内塔问题），是一个大家熟知的问题。在A，B，C三根柱子上，有n个不同大小的圆盘（假设半径分别为1-n吧），一开始他们都叠在我A上（如图所示），你的目标是在最少的合法移动步数内将所有盘子从A塔移动到C塔。

  游戏中的每一步规则如下：
  
	1. 每一步只允许移动一个盘子（从一根柱子最上方到另一个柱子的最上方）
	
	  2. 移动的过程中，你必须保证大的盘子不能在小的盘子上方（小的可以放在大的上面，最大盘子下面不能有任何其他大小的盘子）
	  
		
		  
			如对于n=3的情况，一个合法的移动序列式：
			
			  1 from A to C
			  
				2 from A to B
				
				  1 from C to B
				  
					3 from A to C
					
					  1 from B to A
					  
						2 from B to C
						
						  1 from A to C
						  
							
							  
给出一个数n，求出最少步数的移动序列*/
#include<stdio.h>
int j=0;
int f1(int n)
{
	if(n==1)
		j++;
	else
	{
		f1(n-1);
		j++;
		f1(n-1);
	}
	return j;
}

void f(int n,char a,char b,char c)
{
	if(n==1)
		printf("%d from %c to %c\n",n,a,c);
	else
	{
		f(n-1,a,c,b);
		printf("%d from %c to %c\n",n,a,c);
		f(n-1,b,a,c);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",f1(n));
	f(n,'A','B','C');
	return 0;
}


