/*11. 编写函数：移动字符串中的内容，移动规则：把1到第m个字符，平移到字符串的最后，把第m+1到最后的字符移到字符串的前部。（不允许修改main函数）
如输入字符串为：sidamingbu，m输入值为4，则输出为mingbusida。*/
#include <stdio.h>
#include <string.h>
#define N 80
void fun1(char *w)
{
	//
	int i=0,j;
	char t;
	for(j=i+1;j<strlen(w);j++)
	{
	t=*(w+i);
	*(w+i)=*(w+j);
	*(w+j)=t;
	i++;
	}
	//
}
void fun(char *w,int m)
{int i;
 for(i=1;i<=m;i++)
 fun1(w);
}
void main()
{
    char a[N];
	int m;
    gets(a);
	printf("the original string:\n");
	puts(a);
	printf("\n\nenter m:");
	scanf("%d",&m);
	fun(a,m);
	printf("\n the string after moving:\n");
	puts(a);
    printf("\n");	
}