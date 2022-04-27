#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define max 100
typedef struct
{
	int stact[max];
	int top;
}seqstact;
void stackinitiate(seqstact *s)  //��ʼ��˳��ջ
{
	s->top=-1;
}
int stacknotempty(seqstact s)  //�ж�˳��ջ�Ƿ�Ϊ��
{
	if(s.top<=-1)return 0;
	else return 1;
}
int stactpush(seqstact *s,int x)   //ѹջ
{
	if(s->top>=max)
	{
		printf("��ջ�������޷�����\n");
		return 0;
	}
	else
	{
		s->top++;
		s->stact[s->top]=x;
		return 1;
	}
}
int stactpop(seqstact *s,int *d)  //��ջ
{
	
	if(s->top<=-1)
	{
		printf("��ջ�ѿ�������Ԫ�س�ջ\n");
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
	int card[52];   //�˿�������
	int pos;   //�ƴ���
	long temptime;
	stackinitiate(&stact);
	if( stacknotempty(stact)==0)
		printf("\nջΪ�գ�");
	else
		printf("ջ�ǿ�");
	srand(time(&temptime)%60);   //ʹ��ʱ���ʼ�������
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