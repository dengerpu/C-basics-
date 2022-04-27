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
void Initlinkqueue(Linkqueue *Q)
{
	Q->front=(Qnode)malloc(sizeof(struct node));
	Q->rear=Q->front;
	Q->front->next=NULL;
}
void Delequeue(Linkqueue *Q)
{
	Qnode p;
	p=Q->front->next;
	Q->front->next =p->next;
	free(p);
}
void Enterqueue(Linkqueue *Q)
{
	int x;
	Qnode p;
	p=(Qnode)malloc(sizeof(struct node));
	scanf("%d",&x);
	p->data =x;
	p->next =NULL;
	Q->rear ->next=p;
	Q->rear =p;
}
void gettop(Linkqueue *Q)
{
	int x;
	x=Q->front->next->data;
	printf("%d\n",x);
}
int Isempty(Linkqueue Q)
{
	if(Q.rear==Q.front)
		return 1;
	else
		return 0;
}
int main()
{
	int i,n,a;
	Linkqueue Q;
	Initlinkqueue(&Q);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		{
			if(a==1)
				Enterqueue(&Q);
			else if(a==2)
				Delequeue(&Q);
			else
			{
				printf("ÊäÈë´íÎó\n");
				return 0;
			}
		}
	}
	if((Isempty(Q)))
	{
		printf("impossible!\n");
		return 0;
	}else
		gettop(&Q);
	return 0;
}