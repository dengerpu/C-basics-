/*14、编写函数：将ss所指字符串中所有下标为偶数位置上的字母转换为大写（若该位置上不是字母，则不转换）。
输入数据：I love my motherland!
输出数据：I LoVe mY MoThErLaNd!*/
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
}
/*14、编写函数：将ss所指字符串中所有下标为偶数位置上的字母转换为大写（若该位置上不是字母，则不转换）。
输入数据：I love my motherland!
输出数据：I LoVe mY MoThErLaNd!

#include <stdio.h>
#include <string.h>
#define MAX 100
void fun(char *ss)
{
	char *t;
	t=ss;
	while (*t)
	{if ((*t>='a')&&(*t<='z')) *t=*t-32;
	t=t+2;}    
}
int main()
{
	char tt[51];
	gets(tt); 
	fun(tt);
	printf("%s\n",tt);
	return 0;
}*/