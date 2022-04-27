#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	int num;
	int age;
	char sex;
}stud[10];
int main()
{
	int i;
	FILE *fp;
	if((fp=fopen("D:\\cc\\stud.txt","rb"))==NULL)
	{
		printf("can't open file\n");
		exit(0);
	}
  for(i=0;i<10;i=i+2)
	{
		fseek(fp,i*sizeof(struct student),0);
		fread(&stud[i],sizeof(struct student),1,fp);
		printf("%s %d %d %c\n",stud[i].name,stud[i].num,stud[i].age,stud[i].sex);
	}
	fclose(fp);
	return 0;
}