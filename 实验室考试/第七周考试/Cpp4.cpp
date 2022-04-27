//打印杨辉三角形的前n行；（要求使用队列的知识）
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
void enter_queue(linkqueue *l,int x)
{
	Qnode p;
	p=(Qnode)malloc(sizeof(struct node));
	p->data=x;
	p->next=NULL;
	l->rear->next=p
		l->rear=p;
}
void yanghuisanjiap(linkqueue *l,int n);
{
int i,j,k;

for(i=0;i<n-i;i++)
printf("  ");
for(j=1;j<=n;j++)

}

