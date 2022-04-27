#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	char c;
	if((fp1=fopen("try1.txt","r"))==NULL)
	{
		printf("不能打开文件try1.txt\n");
	
	}
	if((fp2=fopen("try2.txt","r"))==NULL)
	{
		printf("不能打开文件try2.txt\n");
	
	}
	while(fscanf(fp1,"%c",&c)!=EOF)
	{
		fprintf(fp2,"%c",c);
		printf("%c",46);
		if(c==46)
			fprintf(fp2,"\n");
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}