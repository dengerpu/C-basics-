/*19、
编程：现有一个班10个学生（姓名，成绩），完成fun函数，求出最高分并输出。
输入数据：85 76 69 85 91 72 64 87 58 78
输出数据：max=91.00
*/
#include <stdio.h>
#include <stdlib.h>
#define N 10
struct person
{
	double s;
	struct person *next;
};
typedef struct person student;
double fun(student *h)
{
	double max;
	student *p;
	p=h->next ;	
	max=p->s ;
	while(p!=NULL)
	{
		if(p->s >max)
			max=p->s ;
		p=p->next ;
	}
	return max;
}
//建立班级信息链表
student *creat()
{student *h,*p,*q;
int i=0;
h=p=(student *)malloc(sizeof(student));
while (i<N)
{
	q=(student*)malloc(sizeof(student));
	scanf("%lf",&q->s);
	i++;
	p->next=q;
	p=q;
}
p->next=NULL;
return h;
}
int main()
{
    double max;
	student *h;
	h=creat(); 
	max=fun(h);
	printf("max=%.2f\n",max);  
	printf("\n");
	return 0;
}