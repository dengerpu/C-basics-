#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int flag=1,i;
	char str[80],filename[50],ch;
	printf("�������ļ�����\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("���ܴ��ļ�\n");
		exit(0);
	}
	while(flag==1)
	{
		printf("������Сд��ĸ��");
		scanf("%s",str);
		fprintf(fp,"%s\n",str);
		getchar();
		printf("�Ƿ������y/n��?:");
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