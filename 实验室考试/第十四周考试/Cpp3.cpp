/*3.用动态链表做：除了尾部的*和前导*外，将字符串中的其余*号全部删除。
例如：字符串内容为*******AS*BHH**G*******,删除后，字符串内容应该为：*******ASBHHG*********/
#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	char data;
	struct node *next;
}*linklist;
void creat(linklist l)
{
	linklist p;
	char ch;
	while((ch=getchar())!='\n')
	{
		p=(linklist)malloc(sizeof(struct node));
		p->data =ch;
		l->next =p;
		l=p;
	}
	l->next =NULL;
}
void outlist(linklist l)
{
	linklist p;
	p=l->next ;
	while(p!=NULL)
	{
		if(p->data =='*')
			printf("%c",p->data );
		else
			break;
		p=p->next ;
	}
	while(p!=NULL)
	{
	
	}
}
void main()
{
	linklist l;
	l=(linklist)malloc(sizeof(struct node));
	creat(l);
	outlist(l);
}
