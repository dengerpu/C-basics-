//7. �Ӽ����϶���5���ַ����������ǰ���ĸ��С�Ľ�������Ȼ����ź�����ַ����͵������ļ��б��棬�ļ��ѱ��浽d�̸�Ŀ¼�£����write������
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void write(char (*st)[20])
{
	int i,j;
	char t[20];
	FILE *fp1;
for(i=0;i<4;i++)
		for(j=0;j<5-i-1;j++)
			if(strcmp(st[j],st[j+1])<0)
			{
				strcpy(t,st[j]);
				strcpy(st[j],st[j+1]);
				strcpy(st[j+1],t);
			}
	fp1=fopen("d:\\file.txt","w");
for(i=0;i<5;i++)
	{
		fputs(st[i],fp1);fputs("\n",fp1);		
	}
	fclose(fp1);
}
void output()
{
	FILE *fp2;
	char buf[30];
	if ((fp2=fopen("d:\\file.txt","r"))==NULL)
	{	printf("can't open file\n");
		exit(0);
	}
	while (fgets(buf,20,fp2))
		printf("%s",buf);
	fclose(fp2);
}
int main()
{
	char a[5][20];
	int i;
	printf("Enter three strings:\n");
	for(i=0;i<5;i++)
		gets(a[i]);
	write(a);
	output();
	return 0;
}