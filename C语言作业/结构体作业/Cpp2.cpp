//2、删除任意一个有序链表中的重复元素（相同的值保留一个）
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
//输出链表
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
void delsame( LinkList L ) // 删除相同元素并释放内存
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
