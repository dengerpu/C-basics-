//15. ��д������ɾ��һ���ַ����е����пո񡣣��������޸�main������
#include <stdio.h>
#include <string.h>
#define MAX 100
void fun(char *str)
{
	//
	int i,j=0;
	for(i=0;i<strlen(str);i++)
	{
		if(*(str+i)!=' ')
		{
			*(str+j)=*(str+i);
			j++;
		}
	}
	*(str+j)='\0';
	//
}
void main()
{
	char str[81];
	printf("input a string:");
	gets(str);
	puts(str);
	fun(str);
	printf("*** str:%s\n",str);
	printf("\n");	
}