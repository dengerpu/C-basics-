#include<stdio.h>
#include<string.h>
void f(char *c,char *b,char *a)
{
	c=b;
	for(b;b<a;b++)
		if(*b!='*')*(c++)=*b;
		for(;*b!='\0';b++)
			*(c++)=*b;
		*c='\0';
}
int main()
{
	char s[100],*a,*b;
	gets(s);
	a=b=s;
	while(*a)a++; //��ʱa���ָ��'\0'���Խ�������Ҫ��ȥ1��
	a--;               //aָ�����һ��Ԫ��
	while(*a=='*')  a--;      //ɾȥ�����Ԫ��  �൱��  ******ABCE**EF*G
	while(*b=='*')  b++;      //ɾȥǰ���Ԫ��  �൱��  ABCD**EF*G******
f(s,b,a);
		puts(s);
		return 0;
}