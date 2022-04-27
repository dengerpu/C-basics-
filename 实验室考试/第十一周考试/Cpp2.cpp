#include<stdio.h>
#include<malloc.h>
#define true 1
#define false 0
typedef struct node
{
	int data;
	struct node *next;
}*linkstact;
void creatstact(linkstact l)
{
	int i,n;
	linkstact p;
	printf("请输入数组长度\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p=(linkstact)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->next =l->next ;
		l->next =p;
	}
	
}
void print(linkstact l)
{
	linkstact p;
	p=l->next;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("\n");
}
void insert(linkstact l)
{
	int i,j=0;
	printf("请输入要进栈的元素\n");
	scanf("%d",&i);
	linkstact p=l;
	p=(linkstact)malloc(sizeof(struct node));
	p->data =i;
	p->next =l->next ;
	l->next =p;
	printf("输出:");
	print(l);
}
void delet(linkstact l)
{
	linkstact p;
	p=l->next ;
	l->next =p->next ;
	printf("出栈元素为：%d\n",p->data );
	free(p);
	print(l);
}
int isempty(linkstact l)
{
	if(l->next ==NULL)
		return true;
	else
		return false;
}
void main()
{
	linkstact l;int n;
	int a;
	l=(linkstact)malloc(sizeof(struct node));
	l->next =NULL;
	creatstact(l);
	print(l);
	for(int i=0;i<2;i++)
	{
		printf("请输入操作命令,1代表进栈，0代表出栈\n");
		scanf("%d",&a);
		if(a==1)
		{
			printf("进栈：\n");
			insert(l);
		}
		else if(a==0)
		{
			printf("出栈:\n");
			delet(l);
		}
		else
			printf("输入错误\n");
	}
	if(isempty(l))
		printf("空\n");
	else
		printf("不空\n");
	
}