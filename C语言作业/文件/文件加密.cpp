#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *in,*out;
	char ch;
	char infile[100],outfile[100];
	printf("������ԭ�ļ���\n");
	scanf("%s",infile);
	printf("����������ļ���\n");
	scanf("%s",outfile);
	if((in=fopen(infile,"r"))==NULL)
	{
		printf("���ܴ�ԭ�ļ�\n");
		exit(0);
	}
	if((out=fopen(outfile,"w"))==NULL)
	{
		printf("���ܴ򿪼����ļ�\n");
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