#include <stdio.h>
#include <string.h>
#define M 4
#define N 20
void fun(char a[M][N],char *b)
{
	int length,i,j,k=0;
    for(i=0;i<M;i++)
    {
        length=strlen(a[i]);
        for(j=0;j<length;j++)
        {
            b[k++]=a[i][j];
        }
    }
    b[k]='\0';
}
void main()
{
    char w[M][N],a[100];
	int i;
	for(i=0;i<M;i++)
	{
		printf("\n输入第%d个字符串:",i+1);
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