/*18��
��̣�����һ����10��ѧ�����������ɼ��������fun���������ƽ���ֲ������
�������ݣ�85 76 69 85 91 72 64 87 58 78
������ݣ�ave=76.50
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
	double sum=0,aver;
	int i=0;
	student *p;
	p=h->next;
	while(p!=NULL)
	{
		sum+=p->s;
		i++;
		p=p->next ;
	}
	aver=sum/i;
	return aver;
}
//�����༶��Ϣ����
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
    double ave;
	student *h;
	h=creat(); 
	ave=fun(h);
	printf("ave=%.2f\n",ave);  
	printf("\n");
	return 0;
}