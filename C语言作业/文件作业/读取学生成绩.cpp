#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[10];
	int num;
	int age;
	char sex;
}stud[10];
int main()
{
	int i;
	FILE *fp;
	if((fp=fopen("file1.txt","r"))==NULL)
	{
		printf("���ܴ��ļ�\n");
		exit(0);
	}
	for(i=0;i<5;i+=2)
	{
		fseek(fp,i*sizeof(struct student),0);
		fread(&stud[i],sizeof(struct student),1,fp);
		printf("%s %d %d %c\n",stud[i].name,stud[i].num,stud[i].age,stud[i].sex);
	}
	fclose(fp);
	return 0;
}
