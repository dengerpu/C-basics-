/*第二题
题目描述 Description
给出一个英语句子，希望你把句子里的单词顺序都翻转过来
输入描述 Input Description
输入包括一个英语句子。
输出描述 Output Description
按单词的顺序把单词倒序输出
样例输入 Sample Input
I love you
样例输出 Sample Output
you love I
*/
#include<stdio.h>
int main()
{
	char a[100],b[10][10];
	int i=0,j=0,k=0;
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]!=' ')
		{
			b[j][k]=a[i];
			k++;
		}
		else
		{
			b[j][k]='\0';
			j++;
			k=0;
		}
		i++;
	}
	b[j][k]='\0';
	for(i=j;i>=0;i--)
		printf("%s ",b[i]);
	return 0;
}