#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct lnode
{
	int data;
	struct lnode *next;
}lnode,*lnklist;
int listlength(linklist l)
{
	int i=0;
	while(l->next!=NULL)
	{
		i++;
		l=l->next;
	}
	return i;
}
linklist creatlist(linklist l,int n)
{
	int i;
	linklist p;
	for(i=n;i>0;i--)
	{
		p=(linklist)malloc(sizeof(lnode));
		scanf("%d",&p->data);
		p->next=l->next;
		l->next=p;
	}
	return l;
}
linklist listinsert(linklist l,int i,int e)
{
	int j=0;
	linlist *s,*p;
	p=l;
	while(p!=NULL&&j<i-1)
	{
		p=p->next;
		j++;
	}
	if(p==NULL||j>i-1)
	{
		printf("输入位置不合法\n");
		return l;
	}
	s=(linklist)malloc(sizeof(lnode));
	s->data=e;
	s->next=p->next;
	p->next=s;
	return l;
}
linklist listdele(linklist l,int i)
{
int j=0;
linklist *p,*s;
p=l;
while(p->next!=NULL&&j<i-1)
{
p=p->next;
j++;
}
if(p->next==NULL&&j<i-1)
{
printf("输入的位置不合法\n");
return l;
}
s=p->next;
p->next=s->next;
free(s);
return l;
}
int getelem(linklist l,int i)
{
int j,e;
linklist *p;
if(i<1)
}