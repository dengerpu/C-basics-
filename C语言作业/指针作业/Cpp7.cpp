/*7��
��д��������д�������������ַ��������е�M���ַ�������˳��ϲ�Ϊһ���µ��ַ�������
*/
#include <stdio.h>
#include <string.h>
#define M 3
#define N 20
void fun(char a[M][N],char *b)
{
	int i;
	strcpy(b,a[0]);
	for(i=1;i<M;i++)
	{
	strcat(b,a[i]);
	}
}
void main()
{
    char w[M][N]={"AAAA","BBBBBBB","CC"},a[100];
	int i;
	printf("the string:\n");
	for(i=0;i<M;i++) puts(w[i]);
	printf("\n");
	fun(w,a);
	printf("the A string:\n");
	printf("%s",a);
	printf("\n");	
}