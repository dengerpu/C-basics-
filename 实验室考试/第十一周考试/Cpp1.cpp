#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}*linklist;
void initlist(linklist l)
{
	l=(linklist)malloc(sizeof(struct node));
	l->next=NULL;
}
void creatlist(linklist l,int n)
{
	int i;
	linklist p;
	printf("请输入\n");
	for(i=0;i<n;i++)
	{
		p=(linklist)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->next=l->next;
		l->next=p;
	}
}
void print(linklist l)
{
	linklist p;
	p=l->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next ;
	}
	printf("\n");
}
void panduan(linklist l,int n)
{
	linklist p,q;
	int i,j,a=0,b=0,c=0;
	for(i=0,j=n;i<n/2;i++,j--)
	{
		a=0;
		b=0;
		c=0;
	p=l->next;
	q=l->next;
		while(a<i)
		{
			p=p->next ;
			a++;
		}
		while(b<j-1)
		{
			q=q->next ;
			b++;
		}
		if(p->data !=q->data )
		{
			c=1;
			break;
		}
	}
	if(c==0)
		printf("中心对称\n");
	else
		printf("不是中心对称\n");
	
}
void main()
{
	linklist l;
	int n;
	l=(linklist)malloc(sizeof(struct node));
	l->next=NULL;
	printf("请输入n的值\n");
	scanf("%d",&n);
	creatlist(l,n);
	print(l);
	panduan(l,n);
}