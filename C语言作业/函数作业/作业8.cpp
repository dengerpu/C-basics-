//8、已知整型数组a，试编写一个递归函数，实现数组a所有元素的逆转
#include<stdio.h>
int nizhuan(int a[],int n)
{
	if(n==0)
		return 0;
	else
		printf("%d ",a[n-1]);
		return nizhuan(a,n-1);
}
int main()
{
	int a[100];
	int n,i;
	printf("请输入数组长度:\n");
	scanf("%d",&n);
	printf("请输入数:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	nizhuan(a,n);
	printf("\n");
	return 0;
}