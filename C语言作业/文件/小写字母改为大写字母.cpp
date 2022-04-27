#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int flag=1,i;
	char str[80],filename[50],ch;
	printf("请输入文件名：\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("不能打开文件\n");
		exit(0);
	}
	while(flag==1)
	{
		printf("请输入小写字母：");
		scanf("%s",str);
		fprintf(fp,"%s\n",str);
		getchar();
		printf("是否继续（y/n）?:");
		ch=getchar();
		if(ch=='n')
			flag=0;
	}
	rewind(fp);
	while(fscanf(fp,"%s",str)!=EOF)
	{
		for(i=0;str[i]!='\0';i++)
			if(str[i]>='a'&&str[i]<='z')
				str[i]-=32;
			printf("%s\n",str);
	}
	fclose(fp);
}