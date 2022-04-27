/*21、
编写函数：移动字符串中的内容，移动规则：把1到第m个字符，平移到字符串的最后，把第m+1到最后的字符移到字符串的前部。
*/
#include <stdio.h>
#include <string.h>
#define N 80
void fun1(char *w)
{
	int i;char t;
	t=w[0];
	for(i=0;i<(int)strlen(w)-1;i++)
		w[i]=w[i+1];
	w[strlen(w)-1]=t;
}
void fun(char *w,int m)
{
	int i;
	for(i=0;i<m;i++)
		fun1(w);
}
void main()
{
    char a[N]="ABCDEFGHIJK";
	int m;
	printf("the original string:\n");
	puts(a);
	printf("\n\nenter m:");
	scanf("%d",&m);
	fun(a,m);
	printf("\n the string after moving:\n");
	puts(a);
    printf("\n");	
}