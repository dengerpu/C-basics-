/*3. ��д�ݹ麯�����ڵ�һ�д�ӡ���1��1���ڵڶ������2��2�����������ڵ�n�����n��n�����������޸�main������*/
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