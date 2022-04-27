//7、编写递归函数，在第一行打印输出1个1，在第二行输出2个2，。。。，在第n行输出n个n。
#include<stdio.h>
int f(int n)
{
	if(n==1)
		return 1;
	else
		return f(n-1)+1;
}
int print(int n)
{
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
			printf("  ");
		for(k=1;k<=i;k++)
printf("%6d",f(i));
		printf("\n");
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	print(n);
	return 0;
}