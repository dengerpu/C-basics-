#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
		printf("����һ����д��ĸ\n");
	else if(ch>='a'&&ch<='z')
	{
		ch=ch-32;
			printf("����һ��Сд��ĸ       %c\n",ch);
	}
	else if(ch>='0'&&ch<='9')
	{
		ch=ch-'0';
		printf("����һ�������ַ�    %d \n",ch);
	}
	else 
		printf("����һ�������ַ�\n");
return 0;
}