#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	if((fp=fopen("t2.txt","w"))==NULL)
	{
		printf("不能打开文件\n");
		exit(1);
	}
	char ch;
	for(int i=0;i<10;i++)
	{
		scanf("%c",&ch);
		fputc(ch,fp);
	}
	fclose(fp);
	if((fp=fopen("t2.txt","r"))==NULL)
	{
		printf("不能打开文件\n");
		exit(1);
	}
	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
}