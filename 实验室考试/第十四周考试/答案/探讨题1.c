#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#define TRUE 1
#define FALSE 0 
typedef struct GLNode
{
	int tag;
	union
	{
		char atom;
		struct GLNode *hp,*tp;
	}htp;
}GList;
int CreateGList(GList *l,char *a);
void Show(GList *l);
void main()
{
    GList *l;
    char a[99];
    l=(GList *)malloc(sizeof(GList));
    l->tag=1;
    gets(a);
   	if(CreateGList(l,a)==1)
   		printf("创建成功！\n");
   	else
   		printf("创建失败！\n");
   	Show(l);
   	
}
int CreateGList(GList *l,char *a)
{
	GList *p;
	if(*a=='\0')
	{
		l->htp.hp=NULL;
		return FALSE;
	}
	else if(strlen(a)==1)
	{
loop:	p=(GList *)malloc(sizeof(GList));
		//p->tag=0;
		p->htp.atom=*a;
		l->htp.hp=p;
		l->htp.tp->tag=0;
		return TRUE;
	}		
	else
	{
		p=(GList *)malloc(sizeof(GList));
		//p->tag=0;
		p->htp.atom=*a++;
		l->htp.hp=p;
		if(strlen(a)>1)
		{
			l->htp.tp->tag=1;
			CreateGList(l->htp.tp,a);
		}
		else
			goto loop;
		return TRUE;
	}
}
void Show(GList *l)
{
	GList *p=l;
	if(p->htp.hp==NULL)
		printf("空集！\n");
	else
	{
		for(;p->htp.tp->tag!=0;p=p->htp.tp)
			printf("%c ",p->htp.hp->htp.atom);
		printf("%c\n",p->htp.hp->htp.atom);
	}
	for(;p->htp.tp->tag!=0;p=p->htp.tp)
		printf("%d ",p->htp.tp->tag);
}