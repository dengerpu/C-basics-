/*20、
编写函数：将ss所指字符串中所有下标为奇数位置上的字母转换为大写（若该位置上不是字母，则不转换）。
*/
#include <stdio.h>
#include <string.h>
#define MAX 100
void fun(char *ss)    //下标是从0开始计数？？？？
{
	ss++;
	for(;*ss!='\0';ss=ss+2)
		if(*ss>='a'&&*ss<='z')
			*ss=*ss-32;
		*ss='\0';
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