/*20. ��д������ͳ���ַ����и���0��9�������ַ����ֵĴ�����*/
#include <stdio.h>
#include <string.h>
void count(char *st,int tt[])
{
	//
	int i,j;
	for(i=0;i<strlen(st);i++)
	{
		for(j=0;j<=9;j++)
			if(*(st+i)=='j')
			{
				tt[j]++;
			}
	}
	//	
}
int main()
{
	char ss[80];
	int digit[10]={0},i;
	gets(ss);
	count(ss,digit);
    for(i=0;i<10;i++)
		printf("%d:%d��\n",i,digit[i]);
	printf("\n");
	return 0;
}