/*4�����������Ա�A��B��������βָ���ʾѭ������洢�ṹ��
��������βָ��ֱ�Ϊreara��rearb����B�������ӵ�A����ĺ��棬��
����һ���µ�ѭ������C����βָ��Ϊrearb��
�����ͼ��ʾ
*/
#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}linklist;
void initlist(linklist *l)
{
	l=(linklist *)malloc(sizeof(struct node));
	l->next=NULL;
}
void creatlist(linklist *l)
{
	linklist *p;
	int a;
	printf("������ѭ�������е�Ԫ�أ���-1����\n");
	scanf("%d",&a);
	while(a!=-1)
	{
		p=(linklist *)malloc(sizeof(struct node));
		p->data=a;
		p->next=l->next;
		l->next=p;
		scanf("%d",&a);
	}
}
void outlist(linklist *l)
{
	linklist *p;
	p=l->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
void hebing(linklist *a,linklist *b,linklist *l)
{
	linklist *r;
	l=(linklist *)malloc(sizeof(struct node));
	linklist *p,*q;
	p=a->next;
	q=b->next;
	while(p!=NULL)
	{
		r=(linklist *)malloc(sizeof(struct node));
		r->data =p->data ;
		l->next =r;
		l=r;
		p=p->next ;
	}
	while(q!=NULL)
	{
		r=(linklist *)malloc(sizeof(struct node));
		r->data =q->data ;
		l->next =r;
		l=r;	
		q=q->next ;
	}
	l->next =NULL;
}
void main()
{
	linklist *reara,*rearb;
	reara=(linklist *)malloc(sizeof(struct node));
	reara->next=NULL;
	rearb=(linklist *)malloc(sizeof(struct node));
	rearb->next=NULL;
	printf("����ѭ������A������������\n");
	creatlist(reara);
	printf("������ѭ������AΪ��\n");
	outlist(reara);
	printf("����ѭ������B������������\n");
	creatlist(rearb);
	printf("������ѭ������BΪ��\n");
	outlist(rearb);
	hebing(reara,rearb,rearb);
	printf("�ϲ����ѭ������Ϊ\n");
       outlist(rearb);
}