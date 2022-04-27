//36. 从键盘输入10个学生的信息（包括姓名，成绩），存到磁盘文件上。然后再从磁盘文件上读取第2,4,6,8,10共5个学生数据输入计算机，并在屏幕上显示出来。（不允许修改main函数）
#include<stdio.h>
#include<stdlib.h>
#define N 10
struct Student
{
	char name[10];
	int socre;
}stud[N];
void save()
{
	FILE *fp;
	if((fp=fopen("file1.txt","rb"))==NULL)
		printf("不能打开文件\n");
	else
		exit(0);
	
}
void read()
{
	int i;
	FILE *fp;
	for(i=2;i<10;i=i+2)
	{
		fseek(fp,i*sizeof(struct student),0);
		fread(&stud[i],sizeof(struct student),1,fp);
		printf("%s  %d  %d  %c\n",stud[i].name,stud[i].score);
	}
	
}
int main()
{
	printf("please enter data of student:\n");
	for(int i=0;i<N;i++)	
		scanf("%s,%d",stud[i].name,&stud[i].socre);	
	save();
    read();
	return 0;
}