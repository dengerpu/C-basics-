/*11����д���������ַ������±�Ϊż�����ַ���ASCII���������У�����������±�Ϊż�����ַ����������������
�������ݣ�baawrskjghzlicda
������ݣ�the result data is :abdgikrz
*/
#include <stdio.h>
void fun(char st[],char tt[])
{
	int i,j=0,k;
	char t;
	for(i=0;st[i]!='\0';i+=2)
		tt[j++]=st[i];
	tt[j]='\0';
	for(i=0;i<j-1;i++)
		for(k=i+1;k<j;k++)
			if(tt[i]>tt[k])
			{
				t=tt[i];
				tt[i]=tt[k];
				tt[k]=t;
			}
}
int main()
{
	char st[80],tt[80]; 
	gets(st);
	fun(st,tt);
	printf("the result data is :");
	puts(tt);
	return 0;
}