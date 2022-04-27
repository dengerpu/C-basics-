#include<stdio.h>
#include<malloc.h>
typedef int elementtype;
typedef struct CNode
{
	elementtype data;
	struct CNode *next;
}CNode,*CLinkList;
CLinkList linklist()
{
	CLinkList list;
	int num;
	CNode *p;
	list=(CNode *)malloc(sizeof(struct CNode));
	list->data =-1;
	list->next =list;
	printf("������ѭ�������Ԫ�أ���-1������:\n");
	scanf("%d",&num);
	while(num!=-1)
	{
		p=(CNode *)malloc(sizeof(struct CNode));
		p->data =num;
		p->next =list->next ;
		list->next =p;
		scanf("%d",&num);
	}
	p=list;
	while(p->next !=list)
	{
		p=p->next ;
	}
	return p;
}
CLinkList rear(CLinkList reara,CLinkList rearb)
{
	CNode *p;
	p=reara->next ;
	reara->next =rearb->next ->next ;
	free(rearb->next );
	rearb->next =p;
	return rearb;
}
void print(CLinkList cl)
{
	CNode *p;
	p=cl->next ->next ;
	while(p!=cl->next )
	{
		printf("% d  ",p->data );
		p=p->next ;
	}
	printf("\n");
}
void main()
{
	CLinkList clista,clistb,clistc;
	printf("����ѭ������A������������!\n");
	clista=linklist();
	printf("������ѭ������AΪ: \n");
	print(clista);
	printf("\n����ѭ������B������������!\n");
	clistb=linklist();
	printf("������ѭ������BΪ:\n");
	print(clistb);
	clistc=rear(clista,clistb);
	printf("\n�ϲ����ѭ������Ϊ:\n");
	print(clistc);
}