#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int i=0;
	char ch,infile[100];
	printf("�������ļ���\n");
	scanf("%s",infile);
	if((fp=fopen(infile,"r"))==NULL)
	{
		printf("���ܴ��ļ�\n");
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
	printf("����Ϊ:%d",i);
	
}