#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	FILE *fp;
	if((fp=fopen("file2.txt","w"))==NULL)
	{
		printf("���ܴ��ļ�\n");
		exit(1);
	}
	char a[20],ch;
	int n;
	gets(a);
	fputs(a,fp);              //д���ַ���
	fclose(fp);
	if((fp=fopen("file2.txt","r"))==NULL)
	{
		printf("���ܴ��ļ�\n");
		exit(1);
	}
/*	while(!feof(fp))
	{
	ch=fgetc(fp);
	printf("%c",ch);
	}*/

	n=strlen(a);
	fgets(a,n,fp);               //��ȡ�ַ���
	fclose(fp);
}