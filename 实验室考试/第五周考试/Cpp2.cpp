/*2. 编写函数：将输入的任意四个字符串合并，按顺序合并为一个新的字符串。（不允许修改main函数）
如：输入si，da，ming，bu四个字符串后，合并后为：sidamingbu*/

#include <stdio.h>
#include <string.h>
#define M 4
#define N 20
void fun(char a[M][N],char *b)
{
	int i=0;
	*b=0;   //？？？思考为什么
	for(i=0;i<M;i++)
		strcat(b,a[i]);
}
void main()
{
    char w[M][N],a[100];
	int i;
	for(i=0;i<M;i++)
	{
		printf("\n输入 %d's 字符串:",i+1);
		gets(w[i]);		
	}
	printf("the string:\n");
	for(i=0;i<M;i++) puts(w[i]);
	printf("\n");
	fun(w,a);
	printf("合并后的字符串为:\n");
	printf("%s",a);
	printf("\n");	
}