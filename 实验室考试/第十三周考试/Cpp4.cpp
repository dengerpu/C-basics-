/*4．有两个线性表A和B，都是用尾指针表示循环链表存储结构，
两个链表尾指针分别为reara和rearb，将B链表连接到A链表的后面，合
并成一个新的循环链表C。其尾指针为rearb。
输出如图所示
*/
#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}linklist;
void initlist(linklist *l)
{
	l=(linklist *)malloc(sizeof(struct node));
	l->next=NULL;
}
void creatlist(linklist *l)
{
	linklist *p;
	int a;
	printf("请输入循环链表中的元素，以-1结束\n");
	scanf("%d",&a);
	while(a!=-1)
	{
		p=(linklist *)malloc(sizeof(struct node));
		p->data=a;
		p->next=l->next;
		l->next=p;
		scanf("%d",&a);
	}
}
void outlist(linklist *l)
{
	linklist *p;
	p=l->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
void hebing(linklist *a,linklist *b,linklist *l)
{
	linklist *r;
	l=(linklist *)malloc(sizeof(struct node));
	linklist *p,*q;
	p=a->next;
	q=b->next;
	while(p!=NULL)
	{
		r=(linklist *)malloc(sizeof(struct node));
		r->data =p->data ;
		l->next =r;
		l=r;
		p=p->next ;
	}
	while(q!=NULL)
	{
		r=(linklist *)malloc(sizeof(struct node));
		r->data =q->data ;
		l->next =r;
		l=r;	
		q=q->next ;
	}
	l->next =NULL;
}
void main()
{
	linklist *reara,*rearb;
	reara=(linklist *)malloc(sizeof(struct node));
	reara->next=NULL;
	rearb=(linklist *)malloc(sizeof(struct node));
	rearb->next=NULL;
	printf("建立循环链表A，请输入数据\n");
	creatlist(reara);
	printf("建立的循环链表A为：\n");
	outlist(reara);
	printf("建立循环链表B，请输入数据\n");
	creatlist(rearb);
	printf("建立的循环链表B为：\n");
	outlist(rearb);
	hebing(reara,rearb,rearb);
	printf("合并后的循环链表为\n");
       outlist(rearb);
}