#include<stdio.h>
int monkey(int);  //����ԭ������
void main()
{
	int day;
		printf("��ڼ��쿪ʼʱ�����������\n");
	do
	{
		scanf("%d",&day);
		if(day<1||day>10)
			continue;
		else
			break;
		
	}while(1);
	printf("total: %d\n",monkey(day));
}
//���������������ĺ���
int monkey(int k)
{
	int i,m,n;
	for(n=1,i=1;i<=10-k;i++)
	{
		m=2*n+2;
		n=m;
	}
	return n;
}