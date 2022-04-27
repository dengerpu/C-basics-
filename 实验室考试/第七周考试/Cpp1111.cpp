#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct node
{
	char data;
	struct node *next;
}*linkstact;
void initstact(linkstact l)
{
	l=(linkstact)malloc(sizeof(struct node));
	l->next=NULL;
}
void push_stact(linkstact l,char ch)    //Ω¯’ª
{
	linkstact p;
	p=(linkstact)malloc(sizeof(struct node));
	p->data=ch;
	p->next=l->next;
	l->next=p;
}
/*int isempty(linkstact l)
{
	if(l->next==NULL)
		return 1;
	else
		return 0;
}
void gettop(linkstact l,char *ch)
{
	*ch=l->next->data;
}
void pop(linkstact l,char *ch)
{
	linkstact p;
	p=l->next;
	*ch=p->data;
	l->next=p->next;
	free(p);
}
int match(char a,char b)
{
	if(a=='('&&b==')'||a=='['&&b==']'||a=='{'&&b=='}')
		return 1;
	else
		return 0;
}*/
void out_stact(linkstact l)
{
	linkstact p;
	p=l->next ;
	while(p!=NULL)
	{
		printf("%c ",p->data);
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
		/*	case ')':
		case ']':
		case '}':
		if(isempty(s))
		{printf("¿®∫≈≤ª∆•≈‰\n");return; }
		else
		{
		gettop(s,&ch);
		if(match(ch,a[i]))
		pop(s,&ch);
		else
		printf("¿®∫≈≤ª∆•≈‰!\n");return;
		}*/
			
		}
	}
	/*	if(isempty(s))
	printf("¿®∫≈∆•≈‰\n");
	else
	printf("¿®∫≈≤ª∆•≈‰\n");*/
}
main()
{
	linkstact l;
	char a[100];
	printf("«Î ‰»Î\n");
	gets(a);
	initstact(l);  //≥ı ºªØ’ª
	panduan_stact(a);
	out_stact(l);
}
