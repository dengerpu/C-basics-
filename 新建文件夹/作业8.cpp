//8����֪��������a���Ա�дһ���ݹ麯����ʵ������a����Ԫ�ص���ת
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
	printf("���������鳤��:\n");
	scanf("%d",&n);
	printf("��������:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	nizhuan(a,n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}