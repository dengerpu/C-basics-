#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	FILE *fp;
	if((fp=fopen("file2.txt","w"))==NULL)
	{
		printf("不能打开文件\n");
		exit(1);
	}
	char a[20],ch;
	int n;
	gets(a);
	fputs(a,fp);              //写入字符串
	fclose(fp);
	if((fp=fopen("file2.txt","r"))==NULL)
	{
		printf("不能打开文件\n");
		exit(1);
	}
/*	while(!feof(fp))
	{
	ch=fgetc(fp);
	printf("%c",ch);
	}*/

	n=strlen(a);
	fgets(a,n,fp);               //读取字符串
	fclose(fp);
}