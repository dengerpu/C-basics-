/*19、
编写函数，求出ss所指字符串中制定字符的个数，并返回此值。
*/
#include <stdio.h>
#include <string.h>
#define M 81
int fun(char *ss,char c)
{
	int i=0;
	for(;*ss!='\0';ss++)
		if(*ss==c)
			i++;
		return i;
}
void main()
{
	char a[M],ch;
	printf("\nplease enter a string:");
	gets(a);
	printf("\nplease enter a char:");
    ch=getchar();   
	printf("\n enter number of the char is:%d\n",fun(a,ch));
}