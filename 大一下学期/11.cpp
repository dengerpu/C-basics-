/*11. ��д�������ƶ��ַ����е����ݣ��ƶ����򣺰�1����m���ַ���ƽ�Ƶ��ַ�������󣬰ѵ�m+1�������ַ��Ƶ��ַ�����ǰ�������������޸�main������
�������ַ���Ϊ��sidamingbu��m����ֵΪ4�������Ϊmingbusida��*/
#include <stdio.h>
#include <string.h>
#define N 80
void fun1(char *w)
{
	//
	int i=0,j;
	char t;
	for(j=i+1;j<strlen(w);j++)
	{
	t=*(w+i);
	*(w+i)=*(w+j);
	*(w+j)=t;
	i++;
	}
	//
}
void fun(char *w,int m)
{int i;
 for(i=1;i<=m;i++)
 fun1(w);
}
void main()
{
    char a[N];
	int m;
    gets(a);
	printf("the original string:\n");
	puts(a);
	printf("\n\nenter m:");
	scanf("%d",&m);
	fun(a,m);
	printf("\n the string after moving:\n");
	puts(a);
    printf("\n");	
}