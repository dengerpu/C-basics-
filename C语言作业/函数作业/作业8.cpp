//8����֪��������a���Ա�дһ���ݹ麯����ʵ������a����Ԫ�ص���ת
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
	printf("���������鳤��:\n");
	scanf("%d",&n);
	printf("��������:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	nizhuan(a,n);
	printf("\n");
	return 0;
}