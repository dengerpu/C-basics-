//6����д�ݹ麯����xn��ֵ��
#include<stdio.h>
int f(int x,int n)
{
	if(n==1)
		return x;
	else
		return x*f(x,n-1);
	
}
int main()
{
	int  x,n;
	scanf("%d%d",&x,&n);
	printf("%d\n",f(x,n));
	return 0;
}