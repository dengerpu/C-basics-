/*3、编写函数，统计任意一个字符串中哪个数字字符出现频率最高。
输入数据：abc12345689def9876ghi981jk8
输出数据：出现频率最高的数字字符是:8
*/
#include <stdio.h>
#include <string.h>
char count(char *st)
{
	int a[10]={0},i,max,j;
	for(;*st!='\0';st++)
		if(*st>='0'&&*st<='9')
			a[*st-48]++;
		max=a[0];
		j=0;
		for(i=0;i<10;i++)
			if(a[i]>max)
			{
				max=a[i];
				j=i;
			}
			return (j+48);
}
int main()
{
	char ss[80],ch; 
	gets(ss);
	ch=count(ss);
    printf("出现频率最高的数字字符是:");
	printf("%c\n",ch); 
	return 0;
}