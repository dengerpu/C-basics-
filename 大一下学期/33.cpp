/*33. ���fun�������ú�������ͳ��һ������Ϊ2���ַ�������һ���ַ����г��ֵĴ�����
���磺������ַ���Ϊ��asd asasdfg asd as zs67 asd mklo,���ַ���Ϊ��as,��Ӧ���6.
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
	printf("�������ַ���:");
	gets(str);
	printf("�������ַ���:");
	gets(substr);
	puts(str);
	puts(substr);
	n=fun(str,substr);
	printf("n=%d\n",n);
	return 0;
}