/*23. 编写函数：将ss所指字符串中所有下标为奇数位置上的字母转换为大写（若该位置上不是字母，则不转换）。（不允许修改main函数）
如输入I love my motherland!，输出为" I lOvE My mOtHeRlAnD!"*/
#include <stdio.h>
#include <string.h>
#define MAX 100
void fun(char *ss)
{
	//
	int i=0;
	for(i=0;i<strlen(ss);i++)
	{
		if(*(ss+i)>='a'&&*(ss+i)<='z'&&(i%2!=0))
		{
			*(ss+i)=*(ss+i)-32;
		}
	}
	//
	
}
void main()
{
	char tt[51];
	printf("input a string within 50 characters:\n");
	gets(tt);
	printf("\n\nafter changing,the string\n  \"%s\"",tt);
	fun(tt);
	printf("\nbecomes\n  \"%s\"",tt);
	printf("\n");	
}