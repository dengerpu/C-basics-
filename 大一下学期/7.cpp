//7. 编写函数：输入4个整数，找出其中最小的数。用函数的嵌套调用来处理。（不允许修改main函数）
#include<stdio.h>
int max2(int a,int b)    
{
	if(a>b)
		return a;
	else
		return b;	
}
int max4(int a,int b,int c,int d)    
{  	            
	int x,y,z;
	x=max2(a,b);
	y=max2(x,c);
	z=max2(y,d);
	return z;       
}  
int main()
{	
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);            
	printf("max=%d\n",max4(a,b,c,d));
	return 0;
}