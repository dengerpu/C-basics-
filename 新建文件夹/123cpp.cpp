#include<stdio.h>
struct student st
{
int age;
char name[20];
char sex;
};
int main()
{
	struct student st;
intputstudent(&st);
outputstudent(&st);

return 0;
}
void intputstudent(struct student *p)
{
p->age=18;
strcpy(p->name,"zhangsan");
p->sex='f';
}
void outputstudent(struct student *p2)
{
	printf{"%d  %s  %c",p2->age,p2->name,p2->sex};
}