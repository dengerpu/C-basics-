#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char filename[100],ch;
	printf("�������ļ���\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("���ܴ��ļ�\n");
		exit(0);
	}
	printf("����\n");
	while((ch=getchar())!='#')
		fputc(ch,fp);
	fclose(fp);
}