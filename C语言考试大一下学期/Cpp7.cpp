/*7����д�������ƶ��ַ����е����ݣ��ƶ����򣺰�1����m���ַ���ƽ�Ƶ��ַ�������󣬰ѵ�m+1�������ַ��Ƶ��ַ�����ǰ����
�������ݣ�sidamingbu
4
������ݣ�mingbusida
*/
#include <stdio.h>
#include <string.h>
#define N 80
void fun1(char *w)
{
	int i=0;
	char ch=w[0];
	for(i=0;i<strlen(w)-1;i++)
	{
		w[i]=w[i+1];
	}
	w[strlen(w)-1]=ch;
}
void fun(char *w,int m)
{
	int i;
	for(i=1;i<=m;i++)
		fun1(w);
}
int main()
{
    char a[N];
	int m;
    gets(a);
	printf("the original string:\n");
	puts(a);
	printf("\nenter m:");
	scanf("%d",&m);
	fun(a,m);
	printf("\nthe string after moving:\n");
	puts(a);
    printf("\n"); 
	return 0;
}