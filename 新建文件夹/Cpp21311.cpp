#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
		printf("这是一个大写字母\n");
	else if(ch>='a'&&ch<='z')
	{
		ch=ch-32;
			printf("这是一个小写字母       %c\n",ch);
	}
	else if(ch>='0'&&ch<='9')
	{
		ch=ch-'0';
		printf("这是一个数字字符    %d \n",ch);
	}
	else 
		printf("这是一个其他字符\n");
return 0;
}