/*13��
��д�����������д���1С������m�ķ���������xx��ָ�����У��������ĸ���ͨ��k���ء�prime������һ���ж�һ�������Ƿ�Ϊ�������Ƿ���1�����򷵻�0��
*/
#include <stdio.h>
int prime(int m)
{
	int k=2;
	while (k<=m&&(m%k))
		k++;
	if (m==k)
		return 1;
	else 
		return 0;
}
void fun(int m,int *k,int xx[])
{
	int i,j=0;
	for(i=2;i<m;i++)
		if(prime(i)==0)
		{
			xx[j]=i;
			j++;
			
		}
		*k=j;

}
void main()
{
	int m,n,zz[100];
	printf("\nplease enter an integer number between 10 and 100:");
	scanf("%d",&n);
	fun(n,&m,zz);
	printf("\n\nthere are %d non-prime numbers less than %d:",m,n);
	for(n=0;n<m;n++)
		printf("\n %4d",zz[n]);
}