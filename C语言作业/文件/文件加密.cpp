#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *in,*out;
	char ch;
	char infile[100],outfile[100];
	printf("请输入原文件名\n");
	scanf("%s",infile);
	printf("请输入加密文件名\n");
	scanf("%s",outfile);
	if((in=fopen(infile,"r"))==NULL)
	{
		printf("不能打开原文件\n");
		exit(0);
	}
	if((out=fopen(outfile,"w"))==NULL)
	{
		printf("不能打开加密文件\n");
		exit(0);
	}
	while(!feof(in))
	{
		ch=fgetc(in);
		if(ch>='a'&&ch<'z')
		{
			ch+=1;
		}
		else if(ch=='z')
			ch='a';
		fputc(ch,out);
	}
	fclose(in);
	fclose(out);	
}