#include "stdio.h"
#include "string.h"
#include "stdlib.h"
typedef struct Node
{
	char ch;
	struct Node *next,*pro;
}Node;
void main()
{
	Node *s,*p,*q;
    char a[40];//"*******AS*BHH**G*******";
    int f=0,r,i,j;
    gets(a);
    r=strlen(a);
    s=(Node *)malloc(sizeof(Node));
    s->next=NULL;
    q=s;
    for(i=0;i<r;i++)
    {
    	p=(Node *)malloc(sizeof(Node));
    	p->ch=a[i];
    	q->next=p;
    	p->pro=q;
    	q=p;
    }
    q->next=NULL;
    p=s->next;
    i=0;
    while(p!=NULL)
    {
    	i++;
    	q=p;
    	p=p->next;
    }
    p=q->pro;
    while(p->ch=='*')
    {
    	i--;
    	p=p->pro;
    }
    i--;
    p=s->next;
    j=0;
    while(p->ch=='*')
    {
    	j++;
    	p=p->next;
    }
    j++;
    while(j<i)
    {
    	if(p->ch=='*')
    	{
    		q=p->pro;
    		q->next=p->next;
    		p->next->pro=q;
    		free(p);
    		p=q->next;
    	}
    	else
    		p=p->next;
    	j++;
    }
    p=s->next;
    while(p!=NULL)
    {
    	printf("%c",p->ch);
    	p=p->next;
    }
}