#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define max 100
typedef struct
{
	int stact[max];
	int top;
}seqstact;
void stackinitiate(seqstact *s)  //初始化顺序栈
{
	s->top=-1;
}
int stacknotempty(seqstact s)  //判断顺序栈是否为空
{
	if(s.top<=-1)return 0;
	else return 1;
}
int stactpush(seqstact *s,int x)   //压栈
{
	if(s->top>=max)
	{
		printf("堆栈以满，无法插入\n");
		return 0;
	}
	else
	{
		s->top++;
		s->stact[s->top]=x;
		return 1;
	}
}
int stactpop(seqstact *s,int *d)  //出栈
{
	
	if(s->top<=-1)
	{
		printf("堆栈已空无数据元素出栈\n");
		return 0;
	}
	else
	{
		*d=s->stact[s->top];
		s->top--;
		return 1;
	}
}
void main()
{
	seqstact stact;
	int i,z;
	int card[52];   //扑克牌数组
	int pos;   //牌代码
	long temptime;
	stackinitiate(&stact);
	if( stacknotempty(stact)==0)
		printf("\n栈为空！");
	else
		printf("栈非空");
	srand(time(&temptime)%60);   //使用时间初始化随机数
		for(i=1;i<=52;i++)
			card[i]=0;
		i=1;
		while(i!=52)
		{
			pos=rand()%52+1;
			if(card[pos]==0)
			{
				stactpush(&stact,pos);
				card[pos]=1;
				i++;
			}
		}
			printf("1	2	3	4	\n");
			printf("=================\n");
			for(i=0;i<5;i++)
			{
				stactpop(&stact,&z);
				printf("[%c%2d]  ",z/13+3,z%13+1);
				stactpop(&stact,&z);
				printf("[%c%2d]  ",z/13+3,z%13+1);
				stactpop(&stact,&z);
				printf("[%c%2d]  ",z/13+3,z%13+1);
				stactpop(&stact,&z);
				printf("[%c%2d]  ",z/13+3,z%13+1);
				printf("\n");
			}		
	}