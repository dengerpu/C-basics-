//12. 编写函数：从num各字符串中找出最长的一个字符串，并通过形参指针max传回该串地址。（不允许修改main函数）
#include <stdio.h>
#include <string.h>
#define MAX 100
void fun(char a[][81],int num,char **max)
{
	int b[MAX],m,i,j=0;
	for(i=0;i<num;i++)
		b[i]=strlen(a[i]);
	m=b[0];
	for(i=1;i<num;i++)
		if(b[i]>m)
		{
			m=b[i];
			j=i;
		}
		*max=a[j];
		
}
void main()
{
	char ss[10][81],*ps;
	int n,i=0;
	printf("输入若干各字符串:");
	gets(ss[i]);
	puts(ss[i]);
	while(!strcmp(ss[i],"****")==0)
	{
		i++;
		gets(ss[i]);
		puts(ss[i]);
	}
	n=i;
	fun(ss,n,&ps);
	printf("\nmax=%s\n",ps);
	printf("\n");	
}