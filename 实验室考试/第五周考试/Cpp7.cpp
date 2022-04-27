//7. 从键盘上读入5个字符串，对它们按字母大小的降序排序，然后把排好序的字符串送到磁盘文件中保存，文件把保存到d盘根目录下，完成write函数。
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