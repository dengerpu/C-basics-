//2、	创建单链表并实现二进制数加一运算。
#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	char data;
	struct node *next;
}*linklist;
void creat(linklist l)
{
	char ch;
	linklist p;
	ch=getchar();
	while(ch=='0'||ch=='1')
	{
		p=(linklist)malloc(sizeof(struct node));
		p->data=ch;
		l->next=p;
		l=p;
		ch=getchar();
	}
	l->next=NULL;
}
void print(linklist l)
{
	linklist p;
	p=l->next;
	while(p!=NULL)
	{
		printf("%c",p->data);
		p=p->next;
	}
	printf("\n");
}
void jisuan(linklist l)
{
	linklist p,q;
	p=l->next ;
	int n=0,i,j=1;
	while(p!=NULL)
	{
		n++;
		p=p->next ;
	}
	p=l->next ;
	while(j!=n)
	{
		j++;
		p=p->next ;
	}
	p->data +=1;
	for(i=n-1;i>=1;i--)
	{
		j=1;
		p=l->next ;
		while(j!=i)
		{
			p=p->next ;
			j++;
		}
		if(p->next ->data =='2')
		{
			p->next ->data ='0';
			p->data +=1;
		}
	}
	p=l->next ;
	if(p->data =='2')
	{
		p->data ='0';
		q=(linklist)malloc(sizeof(struct node));
		q->data='1';
		q->next=l->next ;
		l->next =q;
	}	
	print(l);
	printf("\n");
}
void main()
{
	linklist l;
	l=(linklist)malloc(sizeof(struct node));
	creat(l);
	print(l);
	jisuan(l);
}