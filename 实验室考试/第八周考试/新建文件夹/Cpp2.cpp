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
	while(*a)a++; //此时a最后指向'\0'所以接下来需要减去1；
	a--;               //a指向最后一个元素
	while(*a=='*')  a--;      //删去后面的元素  相当于  ******ABCE**EF*G
	while(*b=='*')  b++;      //删去前面的元素  相当于  ABCD**EF*G******
f(s,b,a);
		puts(s);
		return 0;
}