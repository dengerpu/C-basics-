#include<stdio.h>
#include<string.h>
void f(char *t)
{
	for(;*t!='\0';t=t+2)
		if(*t>='a'&&*t<='z')
			*t=*t-32;
}
int main()
{
	char s[100];
	gets(s);
     f(s);
		puts(s);
		return 0;
}