/*4. �þ�̬��������ƽ���֣�Ҫ��Ҫ�п��н��������ս��ռ䡣
�磺����85  76  69  85  91  72  64  87��������2��ɾ��λ��pos��2��3�����ս��ռ䣬Ȼ����������79��91�ķ��������뾲̬������������ƽ����Ϊ��*/
#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}*linklist;
void creat(linklist l,int n)
{
	int i;
	linklist p;
	printf("��ֵ��\n");
	for(i=0;i<n;i++)
	{
		p=(linklist )malloc(sizeof(struct node));
		scanf("%d",&p->data);
		l->next=p;
		l=p;
	}
	l->next=NULL;
}
void outlist(linklist l)
{
	linklist p;
	p=l->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
void delelist(linklist l,int a,int b)
{
	linklist p,q,m,n;
	p=l->next;
	for(int i=0;i<a-2;i++)
	{
		p=p->next;
	}
	m=p->next ;
	p->next=m->next;
	free(m);
	q=l->next;
	for(i=0;i<b-3;i++)
	{
		q=q->next;
	}
	n=q->next ;
	q->next=n->next;
	free(n);
}
void insertlist(linklist l,int a,int b,int n)
{
	linklist p,s;
	p=l->next ;
	for(int i=0;i<n-3;i++)
		p=p->next ;
	s=(linklist)malloc(sizeof(struct node));
	s->data =a;
	p->next =s;
	p=s;
	s=(linklist)malloc(sizeof(struct node));
	s->data =b;
	p->next =s;
	p=s;
	p->next =NULL;
}
float aver(linklist l,int n)
{
linklist p;
p=l->next;
float sum=0;
while(p!=NULL)
{
sum+=p->data;
p=p->next;
}
return sum/n;
}
void main()
{
	linklist l;
	int a,b,n;
	printf("Ԫ�ظ���Ϊ\n");
	scanf("%d",&n);
	l=(linklist)malloc(sizeof(struct node));
	creat(l,n);
	printf("����������ɾ��λ��\n");
	scanf("%d%d",&a,&b);
	delelist(l,a,b);
	outlist(l);
	printf("������ȷ����\n");
	scanf("%d%d",&a,&b);
	insertlist(l,a,b,n);
	outlist(l);
	printf("���ƽ����Ϊ%.3f",aver(l,n));
}
