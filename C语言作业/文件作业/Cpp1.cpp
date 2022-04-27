//1、编程完成读出文件sfile.txt中的内容，反序写入另一个文件dfile.txt中去。
#include<stdio.h>
#include <stdlib.h>
void convert(char *s1,char *s2)
{
	char a[100];
	int i=0;
	FILE *in,*out;
	if((in=fopen(s1,"r"))==NULL)
	{
		printf("不能打开文件\n");
		exit(0);
	}
	if((out=fopen(s2,"w"))==NULL)
	{
		printf("不能打开文件\n");
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