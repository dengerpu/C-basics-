#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("file.txt","w"))==NULL)
	{
		printf("���ܴ��ļ�\n");
		exit(0);
	}
	ch=fgetc(fp);
	if(ferror(fp))
	{
		printf("���ļ�����\n");
		clearerr(fp);
	}
	fclose(fp);
	return 0;
}