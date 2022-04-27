/*3. 编写递归函数，在第一行打印输出1个1，在第二行输出2个2，。。。，在第n行输出n个n。（不允许修改main函数）*/
#include <stdio.h>
void print(int  n)
{
//
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
			printf("  ");
		for(k=0;k<i;k++)
			printf("%4d",i);
		printf("\n");
	}
//	
}
int main()
{
	int x;
	scanf("%d",&x);
	print(x);
	return 0;
}