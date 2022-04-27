#include<stdio.h>
#include<string.h>
struct link
{
	int num;
	char name[20];
	float score;
	struct link *next;
};
int main()
{
	struct link a,b,c;
	struct link *head,*p;
	a.num=1001;strcpy(a.name,"zhang");a.score=91;
	b.num=1002;strcpy(b.name,"wang");b.score=92;
	c.num=1003;strcpy(c.name,"sun");c.score=84;
	head=&a;
	a.next=&b;
	b.next=&c;
	c.next=NULL;
	p=head;
	do
	{
		printf("%5d   %-10s  %-.1f\n",p->num,p->name,p->score);
		p=p->next;
	}while(p!=NULL);
	return 0;
}
