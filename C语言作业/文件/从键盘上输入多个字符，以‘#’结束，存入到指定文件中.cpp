#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char filename[100],ch;
	printf("请输入文件名\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("不能打开文件\n");
		exit(0);
	}
	printf("输入\n");
	while((ch=getchar())!='#')
		fputc(ch,fp);
	fclose(fp);
}