/*20��
��̣�����һ����10��ѧ�����������ɼ��������fun���������������������������
�������ݣ�85 76 69 55 91 72 64 87 58 78
������ݣ�persons=2
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
int fun(student *h)
{
	int i=0;
	student *p;
	p=h->next;
	while(p!=NULL)
	{
		if(p->s<60)
			i++;
		p=p->next;
	}
	return i;
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
    int n;
	student *h;
	h=creat(); 
	n=fun(h);
	printf("persons=%d\n",n);  
	printf("\n");
	return 0;
}