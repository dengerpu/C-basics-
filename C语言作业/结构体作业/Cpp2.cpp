//2��ɾ������һ�����������е��ظ�Ԫ�أ���ͬ��ֵ����һ����
#include<malloc.h>
#include<stdlib.h>
#include<stdio.h> 
typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode, *LinkList; 
void creatlist(LinkList *head)
{
	LinkList p,q;
	*head=(LinkList)malloc(sizeof(LNode));
	(*head)->next=NULL;
	q=*head;
	int ch;
	scanf("%d",&ch);
	while (ch!=-1)
	{
		p=(LinkList)malloc(sizeof(LNode));
		p->data=ch;
		q->next=p;
		q=p;
		scanf("%d",&ch);
	}
	p->next=NULL;
}
//�������
void traverselist(LinkList L)
{  
	if (L!=NULL)
	{
		L=L->next;
		while (L!=NULL&&L->next!=NULL)
		{
			printf("%d->",L->data);
			L=L->next;
		}
		printf("%d",L->data);
	}
}
void delsame( LinkList L ) // ɾ����ͬԪ�ز��ͷ��ڴ�
{
	LinkList p,q,r;
	p=L->next;
	while(p!=NULL)
	{
		q=p;
		while(q->next !=NULL)
		{
			if(q->next ->data ==p->data )
			{
				r=q->next ;
				q->next =r->next ;
				free(r);
			}
			else
				q=q->next ;
		}
		p=p->next ;
	}	
}

void main( void )
{
	LinkList LA = NULL; 
	creatlist(&LA);
	traverselist(LA);
	printf("\n");
	delsame(LA);
	traverselist(LA);
	printf("\n");
}
