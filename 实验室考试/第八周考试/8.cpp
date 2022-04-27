#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}*Qnode;
typedef struct
{
	Qnode *front;
	Qnode *rear;
}Linkqueue;
void Enterqueue(Linkqueue Q,int x)
{
	Qnode *p;
	p=(Qnode*)malloc(sizeof(struct node));
	p->data=x;
	p->next=NULL;
	Q.rear->next=p;
	Q.rear=p;
}
int Isempty(Linkqueue Q)
{
	if(Q.rear==Q.front)
		return 1;
	else
		return 0;
}
void gettop(Linkqueue Q)
{
	printf("%d\n",Q.front->next->data);
}
void Delequeue(Linkqueue Q,int *x)
{
	Qnode *p;
	p=Q.front->next;
	Q.front->next=p->next;
	if(Q.rear==p)
		Q.rear=Q.front;
	*x=p->data;
	free(p);
}
int main()
{
	int i,n,x,a,b;
	Qnode Q;
	Q.front=(Qnode*)malloc(sizeof(struct node));
	Q.rear=Q.front;
	Q.front->next=NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		{
			if(a==1)
			{
				scanf("%d",&x);
				Enterqueue(Q,x);
			}
			else if(a==2)
					Delequeue(Q,&b);
				else
				{
					printf("ÊäÈë´íÎó\n");
					return 0;
				}
		}
	}
	if(!(Isempty(Q)))
	{
		printf("impossible!\n");
		return 0;
	}else
	{
		gettop(Q);
	}
	return 0;	
}