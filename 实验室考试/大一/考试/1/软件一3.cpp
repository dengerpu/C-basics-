#include<stdio.h>
int main()
{
	char ch;
	printf("����һ���ַ��� \n");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
		printf("����һ����д��ĸ��\n");
	else if(ch>='a'&&ch<='z')
		printf("����һ��Сд��ĸ��\n");
	else if(ch>='0'&&ch<='9')
		printf("����һ�������ַ���\n");
	else if(ch==' ')
		printf("����һ���ո��ַ���\n");
	else 
		printf("����һ�������ַ���");
		return 0;
	
	
	
	
}