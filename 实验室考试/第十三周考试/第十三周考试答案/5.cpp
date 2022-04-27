#include<stdio.h>
#define MAXSIZE 100
typedef struct 
{
	int data[MAXSIZE];
	int top;
}seqstack;
void initstack(seqstack *s)
{
	s->top=0;
}
int getTop(seqstack *s)
{
	int x;
	if(s->top ==0)
	{
		printf("栈空\n");
		x=0;
	}
	else
		x=(s->data )[s->top ];
	return x;
}
int push(seqstack *s,int x)
{
	if(s->top ==MAXSIZE-1)
	{
		printf("栈满\n");
		return 0;
	}
	else
	{
		s->top ++;
		(s->data )[s->top ]=x;
		return 1;
	}
}
int pop(seqstack *s)
{
	int x;
	if(s->top ==0)
	{
		printf("栈空\n");
		x=0;
	}
	else
	{
		x=(s->data )[s->top ];
		s->top --;
	}
	return x;
}
void main()
{
	seqstack stack,*s;
	int n=0;
	s=&stack;
	initstack(s);
	printf("输入一非负整数（十进制）:");
	scanf("%d",&n);
	push(s,'#');
	while(n!=0)
	{
		push(s,n%8);
		n=n/8;
	}
	printf("对应的八进制数为:");
	while(getTop(s)!='#')
		printf("%d",pop(s));
	printf("\n");
}
