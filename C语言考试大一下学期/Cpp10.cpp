/*10�������Ὣ����һ�׽����n�γ���ϵͳ��һ������ȫ����һ��Ӷ���֮һ����
�ڶ����������µ�����֮һ������֮һ����
�������������µ��ķ�֮һ���ķ�֮һ�������Ĵ��������µ����֮һ�����֮һ����
����������µ�11������ԭ��������й��м������㣿
���count2��������������е����������
�������ݣ�5
������ݣ�There are 59 fishes at first.
*/
#include<stdio.h>
int count2(int n,int m)
{
	if(n==m)
		return 11;
	else return (count2(n,m-1)+1.0/(7-m))*(1.0*(7-m)/(6-m));
}
int main()
{
	int x; 
	int m;
	for(m=5;m>=1;m--)   //�Լ��ӵ�
	{
		x=count2(1,m);
		printf("%d\n",x);
	}
	printf("There are %d fishes at first.\n",x); 
	return 0;
}