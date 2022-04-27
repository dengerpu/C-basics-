#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}*linklist;
void creat(linklist l)
{
	int i;
	linklist p;
	for(i=0;i<5;i++)
	{
		p=(linklist)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		l->next=p;
		l=p;
	}
	l->next=NULL;

}
void print(linklist l)
{	linklist p;
	p=l->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
void main()
{
	linklist l;
	l=(linklist)malloc(sizeof(struct node));
	creat(l);
	print(l);
}