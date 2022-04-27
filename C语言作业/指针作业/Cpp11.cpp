/*11、
编写函数，将字符串中的前导*号全部删除，中间和尾部的*号不删除.
例如：字符串内容为*******AS*BHH**G*******,删除后，字符串内容应该为：AS*BHH**G*******
*/
#include <stdio.h>
void fun(char *a)
{
	char *f;
	f=a;
	while(*f=='*')
		f++;	
	for(;*f!='\0';f++)
		*(a++)=*f;
	*a='\0';
}
void main()
{
	char s[81];
	printf("Enter a string:\n");
	gets(s);
	fun(s);
	printf("the string after deleted:\n");
	puts(s);
	printf("\n");	
}