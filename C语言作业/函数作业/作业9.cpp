//9����֪һ������Ϊn�����飬�Ա�дһ���ݹ麯�����������е����ֵ��
#include<stdio.h>
int max(int a[],int n)
{
	if(n<=1)
		return a[n];
	int t=max(a,n-1);
	if(t>a[n-1])
		return t;
	else
		return a[n-1];
	return 0;
}
/*
int max(int a[],int n)
{
if(n==1)
return a[n-1];
else
return a[n-1]>max(a,n-1)?a[n-1]:max(a,n-1);
}
*/
int main()
{
	int i,n,a[100];
	printf("���������鳤��n\n");
	scanf("%d",&n);
	printf("��������\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("%d\n",max(a,n));
	return 0;
}