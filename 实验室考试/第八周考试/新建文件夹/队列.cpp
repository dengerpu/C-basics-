#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}*Qnode;
typedef struct
{
	Qnode front;
	Qnode rear;
}Linkqueue;
void creat_queue(Linkqueue Q)
{
	int n,i;
	Qnode p;
	printf("请输入链队列元素\n");
	scanf("%d",&n);
	printf("请输入数据元素\n");
	for(i=0;i<n;i++)
	{
		p=(Qnode)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->next=NULL;
		Q.rear->next=p;
		Q.rear=p;
	}
}
void out_queue(Linkqueue Q)
{
	Qnode p;
	p=Q.front->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
void enterqueue(Linkqueue Q)
{
	Qnode p;
	p=(Qnode)malloc(sizeof(struct node));
	int x;
	printf("请输入要进队的元素\n");
	scanf("%d",&x);
	p->data=x;
	p->next=NULL;
	Q.rear->next=p;
	Q.rear=p;
}
void pushqueue(Linkqueue Q)
{
	Qnode p;
	p=Q.front->next ;
	Q.front->next =p->next ;
	free(p);
}
void main()
{
	Linkqueue Q;
	Q.front=(Qnode)malloc(sizeof(struct node));
	Q.rear=Q.front;
	Q.front->next=NULL;
	creat_queue(Q);
	out_queue(Q);
	printf("\n");
	//	enterqueue(Q);
	pushqueue(Q);
	out_queue(Q);
}