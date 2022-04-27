#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("file.txt","w"))==NULL)
	{
		printf("不能打开文件\n");
		exit(0);
	}
	ch=fgetc(fp);
	if(ferror(fp))
	{
		printf("读文件错误\n");
		clearerr(fp);
	}
	fclose(fp);
	return 0;
}