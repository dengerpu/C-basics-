/*32. ��д���fun����ʵ�����¹��ܣ��Ӽ�����������һ����������������ķ�ż�����ӣ�������С�����˳�����pp��ָ�������У���Щ���ӵĸ���ͨ���β�n���ء����������޸�main������
������27�����Ϊ��the result is :3 9*/
#include<stdio.h>
int main()
{
	void  fun (int x,int *pp, int *n);
	int x,a[100],*pp=a,n,i;
	scanf("%d",&x);
	fun(x,pp,&n);
	printf("the result is :");
    for(i=0;i<n;i++)
		printf("%d ",pp[i]);
	printf("\n");
	return 0;
}
void  fun (int x,int *pp, int *n)
{
	int i,j=0;
	for(i=3;i<x;i=i+2)
		if(x%i==0)
		{
			*(pp+j)=i;
			j++;
		}
		*n=j;
}