//8、已知整型数组a，试编写一个递归函数，实现数组a所有元素的逆转
#include<stdio.h>
int nizhuan(int a[],int n)
{
	int i,t;
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	return 0;
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
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}