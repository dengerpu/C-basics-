/*
第三题
寻找子串位置
?时间限制: 1 s
?空间限制: 128000 KB
?题目等级 : 青铜 Bronze
题解
题目描述?Description
给出字符串a和字符串b，保证b是a的一个子串，请你输出b在a中第一次出现的位置。
输入描述?Input Description
仅一行包含两个字符串a和b
输出描述?Output Description
仅一行一个整数
样例输入?Sample Input
abcd bc
样例输出?Sample Output
2
数据范围及提示?Data Size & Hint
字符串的长度均不超过100
Pascal用户请注意：两个字符串之间可能包含多个空格
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k=0,d;
	char a[100],b[100];
	scanf("%s%s",a,b);
	for(i=0;i<strlen(a);i++)
	{
		k=0;
		for(j=i;j<i+strlen(b);j++)
		{
			if(a[j]==b[k])
				k++;
			if(k==strlen(b)-1)
			{
				d=i+1;
				break;
			}
		}
	}
	printf("%d\n",d);
	return 0;
}