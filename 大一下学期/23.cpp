/*23. ��д��������ss��ָ�ַ����������±�Ϊ����λ���ϵ���ĸת��Ϊ��д������λ���ϲ�����ĸ����ת���������������޸�main������
������I love my motherland!�����Ϊ" I lOvE My mOtHeRlAnD!"*/
#include <stdio.h>
#include <string.h>
#define MAX 100
void fun(char *ss)
{
	//
	int i=0;
	for(i=0;i<strlen(ss);i++)
	{
		if(*(ss+i)>='a'&&*(ss+i)<='z'&&(i%2!=0))
		{
			*(ss+i)=*(ss+i)-32;
		}
	}
	//
	
}
void main()
{
	char tt[51];
	printf("input a string within 50 characters:\n");
	gets(tt);
	printf("\n\nafter changing,the string\n  \"%s\"",tt);
	fun(tt);
	printf("\nbecomes\n  \"%s\"",tt);
	printf("\n");	
}