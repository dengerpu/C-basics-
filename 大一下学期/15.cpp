//15. 编写函数：删除一个字符串中的所有空格。（不允许修改main函数）
#include <stdio.h>
#include <string.h>
#define MAX 100
void fun(char *str)
{
	//
	int i,j=0;
	for(i=0;i<strlen(str);i++)
	{
		if(*(str+i)!=' ')
		{
			*(str+j)=*(str+i);
			j++;
		}
	}
	*(str+j)='\0';
	//
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