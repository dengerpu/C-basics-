/*8、
编写函数，除了尾部的*和前导*外，将字符串中的其余*号全部删除，形参p已经指向字符串中最后的一个字母，不得使用c语言提供的字符串函数。中间和尾部的*号不删除.
例如：字符串内容为*******AS*BHH**G*******,删除后，字符串内容应该为：*******ASBHHG*******
*/
#include <stdio.h>
void fun(char *a,char *h,char *p)
{
	a=h;
	for(;h<p;h++)
		if(*(h)!='*')	
			*(a++)=*h;
		for(;*h!='\0';h++)
			*(a++)=*h;
		*a='\0';
}
void main()
{
	char s[81],*t,*f;
	printf("Enter a string:\n");
	gets(s);
	t=f=s;
	while (*t) t++;
	t--;
	while (*t=='*') t--;
	while (*f=='*') f++;
	fun(s,f,t);
	printf("the string after deleted:\n");
	puts(s);
	printf("\n");	
}