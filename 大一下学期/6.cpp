/*6. ��д���������ַ������±�Ϊż�����ַ���ASCII���������У�����������±�Ϊ�������ַ�������������������������޸�main������
�磺ԭʼ�ַ���Ϊbaawrskjghzlicda,���ú����������abdgikrz��*/
#include <stdio.h>
#include<string.h>
void fun(char st[],char tt[])
{
	int i,j;
	char t;
	for(i=0;i<strlen(st)/2;i++)
		tt[i]=st[2*i];
	tt[i]='\0';
	for(i=0;i<strlen(tt)-1;i++)
	{
		for(j=i+1;j<strlen(tt);j++)
			if(tt[i]>tt[j])
			{
				t=tt[i];
				tt[i]=tt[j];
				tt[j]=t;
			}
	}
	j=0;
			for(i=1;i<strlen(tt);i=i+2)
			{
				tt[j]=tt[i];
				j++;
			}
			tt[j]='\0';

}
int main()
{
	char st[80],tt[80];
	gets(st);
	printf("the original data is :\n");
	puts(st);
	fun(st,tt);
	printf("the result data is :\n");
	puts(tt);
	return 0;
}