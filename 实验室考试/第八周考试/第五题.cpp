#include <stdio.h>
#include <string.h>
#define MAX 100
void fun(char *ss)
{	
	for(;*ss!='\0';ss=ss+2)
		if(*ss>='a'&&*ss<='z')
			*ss=*ss-32; 
}
void main()
{
	char tt[51];
	gets(tt); 
	fun(tt);
	printf("%s\n",tt);
	printf("\n");	
}