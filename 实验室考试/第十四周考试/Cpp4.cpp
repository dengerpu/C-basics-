/*4. 用静态单链表求平均分，要求要有空闲结点链表回收结点空间。
如：输入85  76  69  85  91  72  64  87，再输入2次删除位置pos：2和3，回收结点空间，然后重新输入79和91的分数，插入静态单链表，最后求得平均分为：*/
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
	printf("赋值：\n");
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
	printf("元素个数为\n");
	scanf("%d",&n);
	l=(linklist)malloc(sizeof(struct node));
	creat(l,n);
	printf("输入错误分数删除位置\n");
	scanf("%d%d",&a,&b);
	delelist(l,a,b);
	outlist(l);
	printf("输入正确分数\n");
	scanf("%d%d",&a,&b);
	insertlist(l,a,b,n);
	outlist(l);
	printf("最后平均分为%.3f",aver(l,n));
}
