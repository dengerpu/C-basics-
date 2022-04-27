/* Note:Your choice is C IDE */
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#define MAXSIZE 40
#define TRUE 1
#define FALSE 0
typedef struct 
{
	int elem[MAXSIZE];
	int front;
	int rear;
}Queue;
typedef struct Stack
{
	int date;
	struct Stack *next;
}Stack;
int InserteQueue(Queue *q,int x);
void InserteStack(Stack *s,int x);
void Show(Queue *q);
void fun(int *a,int low,int high);
int find(int *a,int low,int high);
void main()
{
    Queue *q;
    Stack *s,*bt;
    int i,j=0,a[10],b[10];
    q->front=q->rear=0;
    bt=s=(Stack *)malloc(sizeof(Stack));
    s->next=NULL;
    srand(time(NULL));
    printf("随机产生10个数为:\n");
   	for(i=0;i<10;i++)
   	{
   		a[i]=rand()%100;
   		printf("%d ",a[i]);
   		if(a[i]%2==0)
   		{
   			b[j]=a[i];
   			j++;
   			if(InserteQueue(q,a[i])==0)
   			{
   				printf("队列已满！\n");
   				break;
   			}
   		}
   	}
   	printf("\n此时循环队列q为:\n");
   	Show(q);
   	fun(b,0,j-1);
   	for(i=0;i<j;i++)
   		InserteStack(s,b[i]);
   	printf("用链栈s输出降序序列:\n");
   	for(bt=s->next;bt!=NULL;bt=bt->next)
   		printf("%d ",bt->date);
}
int InserteQueue(Queue *q,int x)
{
	if((q->rear+1)%MAXSIZE==q->front)
		return FALSE;
	q->elem[q->rear]=x;
	q->rear=(q->rear+1)%MAXSIZE;
	return TRUE;
}
void Show(Queue *q)
{
	int i;
	for(i=q->front;i!=q->rear;i++)
		printf("%d ",q->elem[i]);
	puts("");
}
void fun(int *a,int low,int high)
{
	int pos;
	if(low<high)
	{
		pos=find(a,low,high);
		fun(a,low,pos-1);
		fun(a,pos+1,high);
	}
}
int find(int *a,int low,int high)
{
	int val=a[low];
	while(low<high)
	{
		while(low<high&&a[high]>=val)
			high--;
		a[low]=a[high];
		while(low<high&&a[low]<=val)
			low++;
		a[high]=a[low];
	}
	a[low]=val;
	return low;
}
void InserteStack(Stack *s,int x)
{
	Stack *p;
	p=(Stack *)malloc(sizeof(Stack));
	p->date=x;
	p->next=s->next;
	s->next=p;
}