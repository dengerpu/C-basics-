/*14、编写函数：将ss所指字符串中所有下标为偶数位置上的字母转换为大写（若该位置上不是字母，则不转换）。
输入数据：I love my motherland!
输出数据：I LoVe mY MoThErLaNd!
*/
#include <stdio.h>
#include <string.h>
#define MAX 100
void fun(char *ss)
{
	int i=0;
	for(i=0;ss[i]!='\0';i+=2)
		if(ss[i]>='a'&&ss[i]<='z')
			ss[i]-=32;
}
int main()
{
	char tt[51];
	gets(tt); 
	fun(tt);
	printf("%s\n",tt);
	return 0;
}