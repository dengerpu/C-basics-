/*10�������Ὣ����һ�׽����n�γ���ϵͳ��һ������ȫ����һ��Ӷ���֮һ����
�ڶ����������µ�����֮һ������֮һ����
�������������µ��ķ�֮һ���ķ�֮һ�������Ĵ��������µ����֮һ�����֮һ����
����������µ�11������ԭ��������й��м������㣿
��ɵݹ麯��count2����������е����������
�������ݣ�5
������ݣ�There are 59 fishes at first.
*/
#include<stdio.h>
int count2(int n,int m)
{
 if(n==m)
	 return 11;
 else
	 return (count2(n+1,m)*(n+1)+1)/n;
}
int main()
{
   int x; 
   int m;
   scanf("%d",&m);
   x=count2(1,m);
   printf("There are %d fishes at first.\n",x); 
   return 0;
}