/*17、
编写函数，统计tt所指字符串中'a'到'z'共26各小写字母各自出现的次数，并依此放在pp所指数组中。
例如：当输入abcdefgabcdeabc后，程序的输出结果应该为：
3 3 3 2 2 1 1 0 0 0 0 0 0 0 0 0 0 0  0
*/
#include <stdio.h>
void fun(char *tt,int pp[])
{
	int i;
	for(i=0;i<26;i++)
		pp[i]=0;
	for(;*tt!='\0';tt++)
	{
		for(i=97;i<=122;i++)
			if(*tt==i)
				pp[i-97]++;
	}
}
void main()
{
	char aa[1000];
	int bb[26],k;
	printf("\nplease enter a char string:");
	scanf("%s",aa);
	fun(aa,bb);
	for(k=0;k<26;k++)
		printf("%d ",bb[k]);
	printf("\n");	
}