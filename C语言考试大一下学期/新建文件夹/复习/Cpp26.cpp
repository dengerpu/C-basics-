/*26、
编程：完成delsame函数，实现删除任意一个有序链表中的重复元素（相同的值保留一个）
输入数据：2 2 3 3 3 4 5 6 6 8 -1
输出数据：2 3 4 5 6 8
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
void show( LinkList L ) // 显示表
{
	while(L->next)
	{ 
		printf("%d ",L->next->data);
		L = L->next; }
	
	printf("\n");
} 

void delsame( LinkList L ) // 删除相同元素并释放内存
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