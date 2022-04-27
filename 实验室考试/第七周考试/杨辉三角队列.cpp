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
void initqueue(linkqueue *l)    //��ʼ������
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
	printf("������N��ֵ\n");
	scanf("%d",&N);
	linkqueue l;
	initqueue(&l);
	enterqueue(&l,1);               //��һ��Ԫ�����
	for(n=2;n<=N;n++)               //������n��Ԫ�ز���ӣ�ͬʱ��ӡ��n-1�е�Ԫ��
	{
		enterqueue(&l,1);           //��n�еĵ�һ��Ԫ�����
		for(i=1;i<=n-2;i++)         //���ö����е�n-1��Ԫ�ز�����n���м��n-2��Ԫ�ز����
		{
			deletequeue(&l,&temp);
			printf("%d ",temp);     //��ӡ��n-1�е�Ԫ��
			gethead(l,&x);
			temp=temp+x;            //���ö��е�n-1��Ԫ�ز�����n��Ԫ��
			enterqueue(&l,temp);
		}
		deletequeue(&l,&x);
		printf("%d \n",x);             //��ӡ��n-1�е����һ��Ԫ��
		enterqueue(&l,1);             //��n�е����һ��Ԫ�����
	}
	while(!isempty(l))                //��ӡ���һ��Ԫ��
	{
		deletequeue(&l,&x);
		printf("%d ",x);
	}
	printf("\n");
}
