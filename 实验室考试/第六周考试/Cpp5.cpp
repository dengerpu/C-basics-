#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node
{
	int date;
	struct node * next;
}lnode,*linklist;
linklist creat_list(linklist L)   //创建链表
{
	int i,n,t;
	linklist p;
	printf("请输入链表元素\n");
	scanf("%d",&n);
	printf("请输入数据\n");
	for(i=0;i<n;i++)
	{
		p=(linklist)malloc(sizeof(lnode));
		scanf("%d",&t);
		p->date=t;
		//p->next=L->next;   头插法
		//L->next=p;
		L->next=p;    //尾插法
		L=p;
	}
	L->next=NULL;
	return 0;
}
void out_list(linklist L)   //输出链表
{
	linklist p;
	p=L;
	while(p!=NULL)
	{
		printf("%d ",p->date);
		p=p->next;
	}
	printf("\n");
}
void inert_list(linklist L)
{
	int i,n,j=0;
	printf("请输入要插在第几个以及要插入的数\n");
	scanf("%d%d",&i,&n);
	linklist p,s;
	p=L;
	while(p!=NULL&&j<i-1)
	{
		p=p->next;
		j++;
	}
	if(p==NULL||j>i-1)
	{
		printf("插入位置不合法\n");
		exit(0);
	}
	s->date=n;
	s->next=p->next;
	p->next=s;
	out_list(L);
}
void dele_list(linklist L)
{
	linklist p,q;
	int j=0,i;
	printf("请输入要删除的第几个数\n");
	scanf("%d",&i);
	while(p!=NULL&&j<i-1)
	{
		p=p->next;
		j++;
	}
	q=p->next;
	p->next=q->next;
	free(q);
	out_list(L);
}                       
void main()
{
	linklist L;
	L=(linklist)malloc(sizeof(lnode));
	creat_list(L);
	out_list(L);
	printf("插入\n");
	inert_list(L);
	printf("删除\n");
	dele_list(L);

}