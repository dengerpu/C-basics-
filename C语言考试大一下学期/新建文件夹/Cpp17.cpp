/*17����̣����set_grade������ʵ��ȷ��10��ѧ���ĳɼ��ȼ��Ͳ�����������
�ȼ���A ��85��100��B��70��84��C��60��69��D��0��59 
�������ݣ�zzs 88 zy 67 sl 55 jm 90 ly 56 hj 75 lz 90 wf 69 mt 79 hj 100
������ݣ� zzs A zy C sl D jm A ly D hj B lz A wf C mt B hj A 2
*/
#include <stdio.h>
struct student
{
    char name[20];
    int score;
    char grade;
};
typedef struct student st;
void inputstudent(st *stu,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s",stu[i].name);  
		scanf("%d",&stu[i].score);
	}
}
int set_grade(struct student * p,int n)
{
	int count=0,i;
	for(i=0;i<n;i++)
	{
		if(p[i].score>=85)
			p[i].grade='A';
		else if(p[i].score>=70)
			p[i].grade='B';
		else if(p[i].score>=60)
			p[i].grade='C';
		else 
		{
			p[i].grade='D';
			count++;
		}
	}
	return count;
    
}
void outputstudent(st *p,int n)
{
	int i;
	for(i=0;i<n;i++,p++)
	{
		printf(" %s %c",p->name,p->grade);
	}
}
int main(void)
{
    struct student stu[10], *ptr;
	int count;
    ptr = stu;
    inputstudent(ptr,10);
    count = set_grade(ptr,10);
	outputstudent(ptr,10);
	printf(" %d\n",count);
    return 0;
}