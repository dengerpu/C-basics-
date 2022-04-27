//5、编写函数，统计字符串中各个0到9各数字字符出现的次数。
#include<stdio.h>
#include<string.h>
void f(char *s)
{
	int i,a[100]={0};
	for(;*s!='\0';s++)
	{
		for(i=48;i<=57;i++)
			if(*s==i)
				a[i]++;
	}
	for(i=48;i<=57;i++)
		if(a[i]>0)
			printf("%c:%d\n",i,a[i]);
}
int main()
{
	char s[100],*p;
	gets(s);
	p=s;
	f(s);
}