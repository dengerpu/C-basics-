#include<stdio.h>
int main()
{
	char ch;
	printf("输入一个字符： \n");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
		printf("这是一个大写字母！\n");
	else if(ch>='a'&&ch<='z')
		printf("这是一个小写字母！\n");
	else if(ch>='0'&&ch<='9')
		printf("这是一个数字字符！\n");
	else if(ch==' ')
		printf("这是一个空格字符！\n");
	else 
		printf("这是一个其他字符！");
		return 0;
	
	
	
	
}