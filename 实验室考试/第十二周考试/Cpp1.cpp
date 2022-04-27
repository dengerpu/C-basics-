//1、	创建单链表并实现元素的就地逆置（就地逆置就是不需要额外申请结点空间，只需要利用原有的表中的结点空间）。
#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}*linklist;
void creat(linklist l)
{
	int i,n;
	printf("请输入创建单链表元素的个数：");
	scanf("%d",&n);
	linklist p;
	for(i=1;i<=n;i++)
	{
		p=(linklist)malloc(sizeof(struct node));
		printf("单链表的第%d个元素为：",i);
		scanf("%d",&p->data);
		l->next=p;
		l=p;
	}
	l->next=NULL;
}
void print(linklist l)
{
	linklist p;
	p=l->next;
	printf("单链表中的元素依次为:");
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
void nizhi1(linklist l)
{
	linklist p,q;
	p=l->next;
	l->next=NULL;
	while(p!=NULL)
	{
		q=p->next;
		p->next=l->next;
		l->next=p;
		p=q;
	}
	print(l);
}
void nizhi(linklist l)
{
	linklist p;
	p=l->next ;
	int n=0,i,j;
	while(p!=NULL)
	{
		n++;
		p=p->next ;
	}
	printf("单链表逆置后单链表中的元素依次为：");
	for(i=n;i>=1;i--)
	{
		j=1;
		p=l->next ;
		while(j!=i)
		{
			p=p->next ;
			j++;
		}
		printf("%d ",p->data );
	}
	printf("\n");
}
void nizhi3(linklist l)
{
	linklist p,q;
	p=l->next ;
	int n=0,i,j,t,k;
	while(p!=NULL)
	{
		n++;
		p=p->next ;
	}
	for(i=1;i<=n/2;i++)
	{
		j=1;
		k=1;
		p=l->next ;
		q=l->next ;
		while(j!=i)
		{
			p=p->next ;
			j++;
		}
		while(k!=n+1-i)
		{
			q=q->next ;
			k++;
		}
		t=p->data ;
		p->data =q->data ;
		q->data =t;
	}
	print(l);	
}
void main()
{
	linklist l;
	l=(linklist)malloc(sizeof(struct node));
	creat(l);
	print(l);
	nizhi(l);
	nizhi1(l);
	nizhi3(l);
}