#include "stdio.h"
#include "stdlib.h"
typedef struct Polynode
{
	int coef;
	int exp;
	struct Polynode *next;
}Polynode,*Polylist;
Polylist Polycreate();
void main()
{
    Polynode *head,*p;
    int x,y=0,i,s;
    head=Polycreate();
    p=head->next;
    /*while(p!=NULL)
    {
    	printf("%d %d\n",p->coef,p->exp);
    	p=p->next;
    }*/
    printf("ÊäÈëxÖµ£º\n");
    scanf("%d",&x);
    while(p!=NULL)
    {
    	s=p->coef;
    	for(i=1;i<=p->exp;i++)
    		s*=x;
    	y+=s;
    	p=p->next;
    }
    printf("%d",y);
}
Polylist Polycreate()
{
	Polynode *head,*s,*r;
	int c,e;
	head=(Polylist)malloc(sizeof(Polynode));
	r=head;
	scanf("%d%d",&c,&e);
	while(c!=0)
	{
		s=(Polylist)malloc(sizeof(Polynode));
		s->coef=c;
		s->exp=e;
		r->next=s;
		r=s;
		scanf("%d%d",&c,&e);
	}
	r->next=NULL;
	return head;
}