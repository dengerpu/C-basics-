//1�������ɶ����ļ�sfile.txt�е����ݣ�����д����һ���ļ�dfile.txt��ȥ��
#include<stdio.h>
#include <stdlib.h>
void convert(char *s1,char *s2)
{
	char a[100];
	int i=0;
	FILE *in,*out;
	if((in=fopen(s1,"r"))==NULL)
	{
		printf("���ܴ��ļ�\n");
		exit(0);
	}
	if((out=fopen(s2,"w"))==NULL)
	{
		printf("���ܴ��ļ�\n");
			exit(0);
	}
	while(!feof(in))
	{
		a[i]=fgetc(in);
		i++;
	}
	a[i]='\0';
	while(i>0)
	{
		fputc(a[i-1],out);
		i--;
	}
	fclose(in);
	fclose(out);
	
	
}
int main()
{
	convert("d:\\sfile.txt","d:\\dfile.txt");
	return 0;
}