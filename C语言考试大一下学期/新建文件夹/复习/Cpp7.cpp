/*7����д�������ƶ��ַ����е����ݣ��ƶ����򣺰�1����m���ַ���ƽ�Ƶ��ַ�������󣬰ѵ�m+1�������ַ��Ƶ��ַ�����ǰ����
�������ݣ�4
������ݣ�mingbusida
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