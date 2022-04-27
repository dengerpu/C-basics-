/* Note:Your choice is C IDE */
#include "stdio.h"
void f(char *p)
{
	if(*p!='\0')
	{
		f(++p);
		printf("%c",*(--p));
	}
}
void main()
{
    char a[66]="abcdefg";
    f(a);
}