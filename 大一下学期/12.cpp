//12. ��д��������num���ַ������ҳ����һ���ַ�������ͨ���β�ָ��max���ظô���ַ�����������޸�main������
#include <stdio.h>
#include <string.h>
#define MAX 100
void fun(char a[][81],int num,char **max)
{
	int b[MAX],m,i,j=0;
	for(i=0;i<num;i++)
		b[i]=strlen(a[i]);
	m=b[0];
	for(i=1;i<num;i++)
		if(b[i]>m)
		{
			m=b[i];
			j=i;
		}
		*max=a[j];
		
}
void main()
{
	char ss[10][81],*ps;
	int n,i=0;
	printf("�������ɸ��ַ���:");
	gets(ss[i]);
	puts(ss[i]);
	while(!strcmp(ss[i],"****")==0)
	{
		i++;
		gets(ss[i]);
		puts(ss[i]);
	}
	n=i;
	fun(ss,n,&ps);
	printf("\nmax=%s\n",ps);
	printf("\n");	
}