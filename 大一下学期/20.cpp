/*20. 编写函数，统计字符串中各个0到9各数字字符出现的次数。*/
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
		printf("%d:%d个\n",i,digit[i]);
	printf("\n");
	return 0;
}