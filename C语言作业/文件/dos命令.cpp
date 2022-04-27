#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int i=0;
	char ch,infile[100];
	printf("请输入文件名\n");
	scanf("%s",infile);
	if((fp=fopen(infile,"r"))==NULL)
	{
		printf("不能打开文件\n");
		exit(0);
	}
	while(!feof(fp))
	{
	ch=fgetc(fp);
	i++;
	printf("%c",ch);
	}
	fclose(fp);
	printf("\n");
	printf("长度为:%d",i);
	
}