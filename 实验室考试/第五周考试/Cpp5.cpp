//. 有5个学生，每个学生的数据包括姓名、年龄、成绩、出生日期，要求完成min函数，输出成绩最低的学生的信息（包括姓名、年龄、成绩、出生日期）（用结构体知识）。
#include <stdio.h>
#include <string.h>
struct birth
{
	int year;
	int month;
	int day;
};
struct student
{
	char name[20];
	int age;
	int score;
	struct birth bt;
};
void outputst(struct student stu[])
{
	int i;
	printf("output student information:name  age score year month  day:\n");
	for(i=0;i<5;i++)
	{	
		printf("%s,%d,%d,%d,%d,%d",stu[i].name,stu[i].age,stu[i].score,stu[i].bt.year,stu[i].bt.month,stu[i].bt.day);
	}
}
void min(struct student stu[],int *n)
{
	int i=0,max;
	*n=0;
	max=stu[0].score;
	for(i=1;i<5;i++)
		if(stu[i].score>max)
		{
			max=stu[i].score;
			*n=i;
		}	
}
void outputmin(struct student stu[],int n)
{
	printf("max student information\n");
	printf("%s,%d,%d,%d,%d,%d\n",stu[n].name,stu[n].age,stu[n].score,stu[n].bt.year,stu[n].bt.month,stu[n].bt.day);
	
}
int main()
{
	struct student st[5]={"张三",11,90,2002,12,2,"李四",12,92,2003,11,12,"王五",13,93,2004,10,2,"马六",13,89,2003,9,13,"勾七",14,91,1979.4,4};
	int t;	
	min(st,&t);
	outputmin(st,t);
	return 0;
}