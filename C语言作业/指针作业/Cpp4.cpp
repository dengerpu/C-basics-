//4����д������ʵ���ַ�����СдӢ����ĸѭ�����ܡ���a��b��b��c����,z��a��
#include<stdio.h>
#include<string.h>
void f(char *s)
{
	for(;*s!='\0';s++)
	{
		if(*s>='a'&&*s<'z')
			*s+=1;
		else
			if(*s=='z')
				*s='a';
	}
}
int main()
{
	char s[100],*p;
	gets(s);
	p=s;
	f(s);
	puts(s);
	return 0;
}