/*9��
��д������ɾ��һ���ַ����е����пո�
*/
#include <stdio.h>
#include <string.h>
#define MAX 100
void fun(char *str)
{
	char *a;
	a=str;
	for(;*a!='\0';a++)
		if(*a!=' ')
			*(str++)=*a;
		*str='\0';	
}
void main()
{
	char str[81];
	printf("input a string:");
	gets(str);
	puts(str);
	fun(str);
	printf("*** str:%s\n",str);
	printf("\n");	
}