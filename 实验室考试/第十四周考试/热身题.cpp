#include "stdio.h"
void f(char *p)
{
	char *t;
	int i=0,j;
	t=p;
	while(*t)
	{t++;i++;}	
	t--;
	for(j=0;j<i;j++)
		printf("%c",*(t--));
	printf("\n");
}
void main()
{
    char a[66]="abcdefg";
    f(a);
}
