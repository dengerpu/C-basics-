#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("file1.txt","w"))==NULL)   //r只读，w创建一个文件，rb,读取二进制文件，wb,创建二进制文件
	{
		printf("不能打开文件\n");
		exit(1);
	}
	
	for(int i=0;i<10;i++)
	{
		scanf("%c",&ch);   
		fputc(ch,fp);    //fputc作用：文件中写入一个字符
	}
	fclose(fp);
	if((fp=fopen("file1.txt","r"))==NULL)   
	{
		printf("不能打开文件\n");
		exit(1);
	}
	ch=fgetc(fp);        //fgetc作用：每次只读取一个字符
	while(ch!=EOF)
	{
		printf("%c",ch);    //此方法只能用于读取文本文件，不能用于读取二进制文件
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