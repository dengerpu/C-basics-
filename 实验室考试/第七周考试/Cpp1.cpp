/*쳲��������У�Fibonacci sequence�����ֳƻƽ�ָ����С�
����ѧ���а��ɶࡤ쳲�������Leonardoda Fibonacci������
�ӷ�ֳΪ���Ӷ����룬���ֳ�Ϊ"��������"��ָ��������һ�����У�1��1��2��3��5��8��13��21��34
쳲��������У�����n��ֵ�����쳲����������еĵ�n������
*/
#include<stdio.h>
int f(int n)
{
	if(n==1||n==2)
		return 1;
	else
		return f(n-1)+f(n-2);
}
int main()
{
	int n;
	printf("������n��ֵ\n");
	scanf("%d",&n);
	printf("%d\n",f(n));
	return 0;
}