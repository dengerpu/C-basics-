#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *in,*out;
	char ch;
	if((in=fopen("a.txt","r"))==NULL)
	{
		printf("不能打开文件\n");
		exit(0);
	}
	if((out=fopen("b.txt","w"))==NULL)
	{
		printf("不能打开文件\n");
		exit(0);
	}
	while(!feof(in))
	{
		ch=fgetc(in);
		fputc(ch,out);
	}
	fclose(in);fclose(out);
}