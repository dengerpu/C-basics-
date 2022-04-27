/*8、输入10个学生的学号、姓名和成绩，输出学生的成绩等级和不及格人数。
等级：A ：85－100；B：70－84；C：60－69；D：0－59 
*/
#include <stdio.h>
struct student
{
    int num;
    char name[20];
    int score;
    char grade;
};
typedef struct student st;
void inputstudent(st *stu)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个人的学号：\n",i+1);
		scanf("%d",&stu[i].num);
        printf("请输入第%d个人的姓名：\n",i+1);
		scanf("%s",stu[i].name);
		printf("请输入第%d个人的成绩：\n",i+1);
		scanf("%d",&stu[i].score);
	}
}
int set_grade(struct student * p)
{
	int j=0;
	for(int i=0;i<10;i++)
	{
		if(p[i].score <=100&&p[i].score >=85)
			p[i].grade ='A';
		else if(p[i].score >=70&&p[i].score <=84)
			p[i].grade ='B';
		else if(p[i].score >=60&&p[i].score <=69)
			p[i].grade ='C';
		else if(p[i].score<60&&p[i].score >=0)  
		{
			j++;
			p[i].grade ='D';
		}
	}
	return j;  		
}
void outputstudent(st *p)
{
	int i;
	for(i=0;i<10;i++,p++)
	{
		printf("学号：%d,姓名：%s,成绩：%d,等级：%c\n",p->num,p->name,p->score,p->grade);
	}
}
int main(void)
{
    struct student stu[10], *ptr;
	int count;
    ptr = stu;
    inputstudent(ptr);
    count = set_grade( ptr );
	outputstudent(ptr);
	printf("不及格的人数为：%d个\n",count);
    return 0;
}