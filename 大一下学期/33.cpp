/*33. 完成fun函数：该函数可以统计一个长度为2的字符串在另一个字符串中出现的次数。
例如：输入的字符串为：asd asasdfg asd as zs67 asd mklo,子字符串为：as,则应输出6.
*/
#include <stdio.h>
#include <string.h>
int fun(char *str,char *substr)
{
	int i,k=0;
	for(i=0;i<strlen(str);i++)
	{
		if((strcmp(str[i],substr[0])==0)&&(strcmp(str[i+1],substr[1])==0))
			k++;
	}
	return k;	
}
int main()
{
	char str[81],substr[3];
	int n;
	printf("输入主字符串:");
	gets(str);
	printf("输入子字符串:");
	gets(substr);
	puts(str);
	puts(substr);
	n=fun(str,substr);
	printf("n=%d\n",n);
	return 0;
}