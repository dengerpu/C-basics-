/*8������10��ѧ����ѧ�š������ͳɼ������ѧ���ĳɼ��ȼ��Ͳ�����������
�ȼ���A ��85��100��B��70��84��C��60��69��D��0��59 
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
		printf("�������%d���˵�ѧ�ţ�\n",i+1);
		scanf("%d",&stu[i].num);
        printf("�������%d���˵�������\n",i+1);
		scanf("%s",stu[i].name);
		printf("�������%d���˵ĳɼ���\n",i+1);
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
		printf("ѧ�ţ�%d,������%s,�ɼ���%d,�ȼ���%c\n",p->num,p->name,p->score,p->grade);
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
	printf("�����������Ϊ��%d��\n",count);
    return 0;
}