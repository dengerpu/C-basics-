#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	FILE *fp;
	if((fp=fopen("t1.txt","w"))==NULL)
	{
		printf("不能打开文件\n");
		exit(0);
	}
	char str[100],ch;
	int n,i=0;
	gets(str);
	fputs(str,fp);
	fclose(fp);
	n=strlen(str);
	if((fp=fopen("t1.txt","r"))==NULL)
	{
		printf("不能打开文件\n");
		exit(1);
	}
	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}	
}