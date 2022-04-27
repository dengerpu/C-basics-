#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct node
{
	char data;
	struct node *next;
}*linkstact;
void push_stact(linkstact l,char ch)    //Ω¯’ª
{
	linkstact p;
	p=(linkstact)malloc(sizeof(struct node));
	p->data=ch;
	p->next=l->next;
	l->next=p;
}
void out_stact(linkstact l)   
{
	printf(" ‰≥ˆ\n");
	linkstact p;
	p=l->next ;
	while(p!=NULL)
	{
		printf("%c",p->data);
		p=p->next;
	}
}
void panduan_stact(char *a)
{
	linkstact s;int i;char ch;
	for(i=0;a[i]!='\0';i++)
	{
		switch(a[i])
		{
		case '(':
		case '[':
		case '{':push_stact(s,a[i]);break;  
		}
	}
}
main()
{
	linkstact l;
	l=(linkstact)malloc(sizeof(struct node));
	l->next=NULL;
		char a[100];
		printf("«Î ‰»Î\n");
		gets(a);
		panduan_stact(a);
	out_stact(l);
}

