#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n,i,count=0;
	int a[100],b[1001]={0};   //�м�b������ȫ����ʼ��Ϊ0
	srand(time(NULL));  //������ʱ��Ϊ���ӵ��������ÿ�����в���������һ��
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=rand()%1000+1;   //rand()%x+y   ����������ķ�Χ ��y,x+y);
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
		b[a[i]]=1;
	for(i=0;i<=1000;i++)
		if(b[i]==1)
			count++;
		printf("%d\n",count);
		for(i=0;i<=1000;i++)
			if(b[i]==1)
				printf("%d ",i);
			printf("\n");
			return 0;
}