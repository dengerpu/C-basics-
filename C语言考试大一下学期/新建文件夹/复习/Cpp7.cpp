/*7、编写函数：移动字符串中的内容，移动规则：把1到第m个字符，平移到字符串的最后，把第m+1到最后的字符移到字符串的前部。
输入数据：4
输出数据：mingbusida
*/
#include <stdio.h>
#include <string.h>
#define N 80
void fun1(char *w)
{
	int length,i;
	char t;
	length=strlen(w);
	t=w[0];
	for(i=0;i<length-1;i++)
		w[i]=w[i+1];
	w[length-1]=t;
}
void fun(char *w,int m)
{
	int i;
	for(i=1;i<=m;i++)
		fun1(w);
}
int main()
{
    char a[N]="sidamingbu";
	int m;     
	scanf("%d",&m);
	fun(a,m); 
	puts(a);
	printf("\n"); 
	return 0;
}