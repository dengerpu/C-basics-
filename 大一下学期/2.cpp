/*2. ��д�������ж��������x�Ƿ���ڣ�������ڣ��������m=x,index=�������������not be found!���� ���������޸�main������
������7���������m=7,index=3����*/
#include <stdio.h>
#define N 10
int fun(int a[],int m)
{
	//
	int i,j,k=0;
	for(i=0;i<10;i++)
	{
		if(a[i]==m)
			j=i;
		
	}
	if(j>=0)
		k=1;
	return j+1;
}
//
int main()
{
	int i,a[N]={-3,4,7,9,13,45,67,89,100,180},k,m;
	printf("a�����е��������£�");
	for(i=0;i<N;i++) printf("%d ",a[i]);
	printf("enter m:");
	scanf("%d",&m);
	k=fun(a,m);
	if (k>0)
		printf("m=%d,index=%d\n",m,k);
	else
		printf("not be found!\n");
	return 0;
}