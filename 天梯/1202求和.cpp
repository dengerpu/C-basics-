#include<stdio.h>
int qiuhe(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
		sum+=a[i];
	return sum;
}
int main()
{
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qiuhe(a,n);
	printf("%d\n",qiuhe(a,n));
	return 0;
}