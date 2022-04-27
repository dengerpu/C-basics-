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
}*Linkqueue;
void creatqueue(Linkqueue Q)
{
	Qnode p;
	int i,n;
	printf("请输入链队列长度\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p=(Qnode)malloc(sizeof(struct node));
		scanf("%d",&p->data );
		p->next =NULL;
		Q->front->next=p;
		Q->front=p;
	}
}
int Intitqueue(Linkqueue Q)  //队列初始化
{
	Q->front=(Qnode)malloc(sizeof(struct node));
	if(Q->front!=NULL)
	{
		Q->rear=Q->front;
		Q->front->next=NULL;
		return 1;
	}
	else
		return 0;
}
int Enterqueue(Linkqueue Q)
{
	Qnode p;
	int x;
	printf("请输入要入队的元素\n");
	scanf("%d",&x);
	p=(Qnode)malloc(sizeof(struct node));
	if(p!=NULL)
	{
		p->data =x;
		p->next =NULL;
		Q->front->next=p;
		Q->front=p;
		return 1;
	}
	else
		return 0;
}
int Deletequeue(Linkqueue Q,int *x)
{
	Qnode p;
	if(Q->front==Q->rear)
		return 0;
	p=Q->front->next;
	Q->front->next=p->next ;
	if(Q->rear==p)
		Q->rear=Q->front;
	*x=p->data ;
	free(p);
	return 1;
}
int  Outqueue(Linkqueue Q)
{
	if(Q->front->next==NULL )
	{
		printf("队列为空\n");
		return 0;
	}
	Qnode p;
	p=Q->front->next;
	while(p!=NULL)
	{
		printf("%d ",p->data );
		p=p->next ;
	}
	printf("\n");
	return 1;
}
void main()
{
	Linkqueue Q;
	Intitqueue(Q);
	creatqueue(Q);
	Outqueue(Q);
}
