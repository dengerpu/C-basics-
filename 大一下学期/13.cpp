/*13. ��д������������������ĸ��ַ����ϲ�����˳��ϲ�Ϊһ���µ��ַ��������������޸�main������
�磺����si��da��ming��bu�ĸ��ַ����󣬺ϲ���Ϊ��sidamingbu*/
#include <stdio.h>
#include <string.h>
#define M 4
#define N 20
void fun(char a[M][N],char *b)
{
	b=strcat(a[0],a[1]);
	b=strcat(b,a[2]);
	b=strcat(b,a[3]);
}
void main()
{
    char w[M][N],a[100];
	int i;
	for(i=0;i<M;i++)
	{
		printf("\n���� %d's �ַ���:",i+1);
		gets(w[i]);		
	}
	printf("the string:\n");
	for(i=0;i<M;i++) puts(w[i]);
	printf("\n");
	fun(w,a);
	printf("�ϲ�����ַ���Ϊ:\n");
	printf("%s",a);
	printf("\n");	
}