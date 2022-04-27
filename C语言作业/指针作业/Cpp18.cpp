/*18、
编写函数，统计一行字符串中单词的个数，作为函数值返回。一行字符串在主函数中输入，规定所有单词由小写字母组成，单词之间由若干各空格隔开，一行的开始没有空格。
*/
#include <stdio.h>
#include <string.h>
#define N 80
int fun(char *s)
{
	int count=0;
	for(;*s!='\0';s++)
		if(*s==' ')
			count++;
		return count+1;
}
void main()
{
	char line[N];int num=0;
	printf("enter a string :\n");
	gets(line);
	num=fun(line);
	printf("the number of word is :%d\n\n",num);
	
}