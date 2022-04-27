/*7、
编写函数：编写函数，将放在字符串数组中的M各字符串，按顺序合并为一个新的字符串。。
*/
#include <stdio.h>
#include <string.h>
#define M 3
#define N 20
void fun(char a[M][N],char *b)
{
	int i;
	strcpy(b,a[0]);
	for(i=1;i<M;i++)
	{
	strcat(b,a[i]);
	}
}
void main()
{
    char w[M][N]={"AAAA","BBBBBBB","CC"},a[100];
	int i;
	printf("the string:\n");
	for(i=0;i<M;i++) puts(w[i]);
	printf("\n");
	fun(w,a);
	printf("the A string:\n");
	printf("%s",a);
	printf("\n");	
}