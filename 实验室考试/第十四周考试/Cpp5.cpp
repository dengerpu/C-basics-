#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<algorithm>
typedef struct node
{
	int data;
	struct node *next;
}*linkstact;
void insert(linkstact l,int a)
{
	linkstact p;
	p=(linkstact)malloc(sizeof(struct node));
	p->data=a;
	p->next=l->next ;
	l->next =p;
}
void out(linkstact l)
{
	linkstact p;
	p=l->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
void main()
{
	int a[10],i,queue[10];
	int front=0,rear=0,top=0;
	linkstact l;
	l=(linkstact )malloc(sizeof(struct node));
	l->next=NULL;
	printf("产生的10个随机数为\n");
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		a[i]=rand();
		printf("%d ",a[i]);
		if(a[i]%2==0)
			queue[rear++]=a[i];
	}
	//sort(a,rear);
	printf("\n");
	printf("此时循环队列q为\n");
	while(front!=rear)
	{
		insert(l,queue[front]);
		printf("%d ",queue[front]);
		front++;
	}
	printf("\n");
	printf("用链栈输出为\n");
	out(l);
	
}