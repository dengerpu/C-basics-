#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("file1.txt","w"))==NULL)   //rֻ����w����һ���ļ���rb,��ȡ�������ļ���wb,�����������ļ�
	{
		printf("���ܴ��ļ�\n");
		exit(1);
	}
	
	for(int i=0;i<10;i++)
	{
		scanf("%c",&ch);   
		fputc(ch,fp);    //fputc���ã��ļ���д��һ���ַ�
	}
	fclose(fp);
	if((fp=fopen("file1.txt","r"))==NULL)   
	{
		printf("���ܴ��ļ�\n");
		exit(1);
	}
	ch=fgetc(fp);        //fgetc���ã�ÿ��ֻ��ȡһ���ַ�
	while(ch!=EOF)
	{
		printf("%c",ch);    //�˷���ֻ�����ڶ�ȡ�ı��ļ����������ڶ�ȡ�������ļ�
		ch=getc(fp);
	}
	printf("\n");
	/*	while(!feof(fp))
	{
	ch=getc(fp);
	printf("%c",ch);
	}
	while((ch=fgetc(fp))!=EOF)
	{
	putchar(ch);
}*/
	fclose(fp);
}