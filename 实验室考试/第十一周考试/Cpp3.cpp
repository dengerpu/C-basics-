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
}linkqueue;
void initqueue(linkqueue l)
{
	l.front=l.rear=(Qnode)malloc(sizeof(struct node));
	l.front->next=NULL;
	
}
void creatqueue(linkqueue l)
{
	int i,n;
	printf("«Î ‰»Î≥§∂»\n");
	scanf("%d",&n);
	Qnode p;
	for(i=0;i<n;i++)
	{
		p=(Qnode)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->next=NULL;
		l.rear->next=p;
		l.rear=p;
	}
	l.rear->next=NULL;
}
void print(linkqueue l)
{
	Qnode p;
	p=l.front->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
void main()
{
	linkqueue l;
	//initqueue(l);
	l.front=l.rear=(Qnode)malloc(sizeof(struct node));
	l.front->next=NULL;
	creatqueue(l);
	print(l);
}