#include<stdio.h>
struct student 
{
	int num;
	char name[20];
	float score[3];
	float aver;
};
void input(struct student stud[])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		scanf("%d%s",&stud[i].num,&stud[i].name);
		for(j=0;j<3;j++)
			scanf("%f",&stud[i].score[j]);
		stud[i].aver=(stud[i].score[0]+stud[i].score[1]+stud[i].score[2])/3.0;
	}
}
struct student max(struct student stud[])
{
	int i,t=0;
	for(i=0;i<5;i++)
		if(stud[i].aver>stud[t].aver)
			t=i;
		return stud[t];
}
void output(struct student stud)
{
	printf("\n平均成绩最高的学生是：\n");
	printf("学号:%d\n姓名:%s\n3门课程成绩：%.2f%.2f%.2f\n平均成绩:%.2f",stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
}
int main()
{
	struct student stud[3],*p=stud;
	input(p);
	output(max(p));
	return 0;
}