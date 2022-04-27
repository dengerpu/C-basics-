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
void initqueue(linkqueue *l)    //初始化队列
{
	l->front=(Qnode)malloc(sizeof(struct node));
	if(l->front!=NULL)
	{
		l->rear=l->front;
		l->front->next=NULL;
	}
}
int isempty(linkqueue l)
{
	if(l.front->next==NULL)
		return 1;
	else
		return 0;
}
void enterqueue(linkqueue *l,int x)
{
	Qnode p;
	p=(Qnode)malloc(sizeof(struct node));
	p->data=x;
	p->next=NULL;
	l->rear->next=p;
	l->rear=p;
}
void deletequeue(linkqueue *l,int *x)
{
	Qnode p;
	p=l->front->next;
	*x=p->data;
	l->front->next=p->next;
	free(p);
}
void gethead(linkqueue l,int *x)
{
	*x=l.front->next->data;
}
main()
{
	int temp,x,i,N,n;
	printf("请输入N的值\n");
	scanf("%d",&N);
	linkqueue l;
	initqueue(&l);
	enterqueue(&l,1);               //第一行元素入队
	for(n=2;n<=N;n++)               //产生第n行元素并入队，同时打印第n-1行的元素
	{
		enterqueue(&l,1);           //第n行的第一个元素入队
		for(i=1;i<=n-2;i++)         //利用队列中第n-1行元素产生第n行中间的n-2个元素并入队
		{
			deletequeue(&l,&temp);
			printf("%d ",temp);     //打印第n-1行的元素
			gethead(l,&x);
			temp=temp+x;            //利用队中第n-1行元素产生第n行元素
			enterqueue(&l,temp);
		}
		deletequeue(&l,&x);
		printf("%d \n",x);             //打印第n-1行的最后一个元素
		enterqueue(&l,1);             //第n行的最后一个元素入队
	}
	while(!isempty(l))                //打印最后一行元素
	{
		deletequeue(&l,&x);
		printf("%d ",x);
	}
	printf("\n");
}
