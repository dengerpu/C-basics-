/*28. 求链表的平均分。
如：输入85  76  69  85  91  72  64  87时，平均分为：78.625
/*
求出平均分，由函数值返回。
*/
#include <stdio.h>
#include <stdlib.h>
#define N 8
struct slist
{
double s;
struct slist *next;
};
typedef struct slist STREC;
double fun(STREC *h)
{


}
STREC *creat(double *s)
{STREC *h,*p,*q;
int i=0;
h=p=(STREC *)malloc(sizeof(STREC));
p->s=0;
while (i<N)
{
	q=(STREC*)malloc(sizeof(STREC));
	q->s=s[i];i++;
	p->next=q;
	p=q;
}
p->next=0;
return h;
}
void outlist(STREC *h)
{
	STREC *p;
	p=h->next;
	printf("head");
	do {
	printf("->%4.1f",p->s);
	p=p->next;
	}while (p!=0);
	printf("\n\n");
}
void main()
{
	double s[N],ave;
     int i;
     for(i=0;i<8;i++)
     scanf("%lf",&s[i]);
	STREC *h;
	h=creat(s);
	outlist(h);
	ave=fun(h);
	printf("ave=%6.3f\n",ave);		
	printf("\n");	
}