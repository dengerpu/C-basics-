/*26��
��̣����delsame������ʵ��ɾ������һ�����������е��ظ�Ԫ�أ���ͬ��ֵ����һ����
�������ݣ�2 2 3 3 3 4 5 6 6 8 -1
������ݣ�2 3 4 5 6 8
*/
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
	int x;
	*head=(LinkList)malloc(sizeof(LNode));
	(*head)->next=NULL;
	q=*head;  
	scanf("%d",&x);
	while (x!=-1)
	{
		p=(LinkList)malloc(sizeof(LNode));
		p->data=x;
		q->next=p;
		q=p;
		scanf("%d",&x);
	}
	p->next=NULL;
}
void show( LinkList L ) // ��ʾ��
{
	while(L->next)
	{ 
		printf("%d ",L->next->data);
		L = L->next; }
	
	printf("\n");
} 

void delsame( LinkList L ) // ɾ����ͬԪ�ز��ͷ��ڴ�
{
	LinkList p,q;
	p=L->next;
	while(p->next!=NULL)
	{
		q=p->next;
		if(p->data==q->data)
		{
			p->next=q->next;
			free(q);
		}
		else
			p=p->next;
	}
    
}

void main( void )
{
	LinkList LA = NULL; 
	creatlist(&LA);
	delsame(LA);
	show(LA);
}