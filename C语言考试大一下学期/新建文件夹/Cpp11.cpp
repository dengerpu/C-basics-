/*11����д���������ַ������±�Ϊż�����ַ���ASCII���������У�����������±�Ϊż�����ַ����������������
�������ݣ�baawrskjghzlicda
������ݣ�the result data is :abdgikrz
*/
#include <stdio.h>
void fun(char st[],char tt[])
{
	char t;
	int i,n=0,j;
	for(i=0;st[i]!='\0';i+=2)
	{
		tt[n]=st[i];
		n++;
	}
	tt[n]='\0';
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(tt[i]>tt[j])
			{
				t=tt[i];
				tt[i]=tt[j];
				tt[j]=t;
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