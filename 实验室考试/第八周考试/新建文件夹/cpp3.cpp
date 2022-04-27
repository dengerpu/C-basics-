#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}*Linklist;
void creat_list(Linklist L,int n)
{
	int i;
	Linklist p,head;
	head=L;
	for(i=1;i<=n;i++)
	{
		p=(Linklist)malloc(sizeof(struct node));
		p->data=i;
		L->next =p;
		L=p;
	}
	L->next =head;
}
void Out_list(Linklist L)
{
	Linklist p;
	p=L->next ;
	while(p!=NULL)
	{
		printf("%d ",p->data );
		p=p->next ;
	}
	printf("\n");
}
void main()
{	
	int m,n,i,j,king;
	Linklist L,head,p;
	L=(Linklist)malloc(sizeof(struct node));
	head=L;
	scanf("%d%d",&m,&n);
	if(m==1)
		king=1;
	creat_list(L,m);
	p=L;
	for(i=1;i<m;i++)
	{
		for(j=1;j<n;j++)
			p=p->next ;
	
	L->next =p->next ;
	free(p);
	}
king=L->data;
printf("%d\n",king);
printf("\n");
}