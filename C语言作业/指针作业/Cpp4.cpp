//4、编写函数，实现字符串中小写英文字母循环加密。如a到b，b到c，…,z到a。
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