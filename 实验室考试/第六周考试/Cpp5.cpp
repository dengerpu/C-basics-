#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node
{
	int date;
	struct node * next;
}lnode,*linklist;
linklist creat_list(linklist L)   //��������
{
	int i,n,t;
	linklist p;
	printf("����������Ԫ��\n");
	scanf("%d",&n);
	printf("����������\n");
	for(i=0;i<n;i++)
	{
		p=(linklist)malloc(sizeof(lnode));
		scanf("%d",&t);
		p->date=t;
		//p->next=L->next;   ͷ�巨
		//L->next=p;
		L->next=p;    //β�巨
		L=p;
	}
	L->next=NULL;
	return 0;
}
void out_list(linklist L)   //�������
{
	linklist p;
	p=L;
	while(p!=NULL)
	{
		printf("%d ",p->date);
		p=p->next;
	}
	printf("\n");
}
void inert_list(linklist L)
{
	int i,n,j=0;
	printf("������Ҫ���ڵڼ����Լ�Ҫ�������\n");
	scanf("%d%d",&i,&n);
	linklist p,s;
	p=L;
	while(p!=NULL&&j<i-1)
	{
		p=p->next;
		j++;
	}
	if(p==NULL||j>i-1)
	{
		printf("����λ�ò��Ϸ�\n");
		exit(0);
	}
	s->date=n;
	s->next=p->next;
	p->next=s;
	out_list(L);
}
void dele_list(linklist L)
{
	linklist p,q;
	int j=0,i;
	printf("������Ҫɾ���ĵڼ�����\n");
	scanf("%d",&i);
	while(p!=NULL&&j<i-1)
	{
		p=p->next;
		j++;
	}
	q=p->next;
	p->next=q->next;
	free(q);
	out_list(L);
}                       
void main()
{
	linklist L;
	L=(linklist)malloc(sizeof(lnode));
	creat_list(L);
	out_list(L);
	printf("����\n");
	inert_list(L);
	printf("ɾ��\n");
	dele_list(L);

}