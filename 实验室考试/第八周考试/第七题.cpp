#include<stdio.h>
#include<malloc.h>
#define maxsize 100
typedef struct node
{
	char stact[maxsize];
	int top;
}*seqstact;
int push(seqstact s,char x)
{
	if(s->top>=maxsize-1) return 0;
	s->top++;
	s->stact[s->top]=x;
	return 1;
}
int pop(seqstact s,char ch)
{
	if(s->top<0) return 0;
	ch=s->stact [s->top ];
	s->top --;
	return (ch);
}
int gettop(seqstact s)  //
{
	if(s->top<0) return 0;
	return (s->stact[s->top]);
}
int empty(seqstact s)
{
	if(s->top<0)return 1;
	else
		return 0;
}
int In(char ch)
{
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
		return 1;
	else
		return 0;
}
int operate(int a,char theta,int b)
{
	if(theta=='+')
		return (a+b);
	if(theta=='-')
		return (a-b);
	if(theta=='*')
		return (a*b);
	if(theta=='/')
		return (a/b);
	
}
/*char Precede(char a,char b)   //运算符优先级
{
char c;
if(a=='#'&&(b=='+'||b=='-'||b=='*'||b=='/'))
{
c='<';
return (c);
}
if((a=='+'||a=='-')&&(b=='*'||b=='/'))
{
c='>';
return (c);
}
if((a=='*'||a=='/')&&(b=='+'||b=='-'))
{
c='<';
return (c);
}
if((a=='+'||a=='-')&&(b=='+'||b=='-'))
{
c='=';
return (c);
}
if((a=='*'||a=='/')&&(b=='+'||b=='-'))
{
c='=';
return (c);
}
}*/
char Precede(char a,char b)
{
	switch(a)
	{
	case'#':
		switch(b)
		{
		case'#':return'=';
		case'+':
		case'-':
		case'*':
		case'/':return'<';
		}
		case'+':
			switch(b)
			{
			case'#':return'>';
			case'+':
			case'-':return'=';
			case'*':
			case'/':return'<';
			}
			case'-':
				switch(b)
				{
				case'#':return'>';
				case'+':
				case'-':return'=';
				case'*':
				case'/':return'>';
				}
				case'*':
					switch(b)
					{
					case'#':return'>';
					case'+':
					case'-':return'>';
					case'*':
					case'/':return'=';
					}
					case'/':
						switch(b)
						{
						case'#':return'>';
						case'+':
						case'-':return'>';
						case'*':
						case'/':return'=';
						}
						
	}
}
int main()
{ 
	int a,b,v,temp;
	char theta;
	char ch;  //ch用于保存读入表达式的字符
	seqstact OPTR,OPND;  //OPTR运算符栈，OPND运算数栈
	OPTR=(seqstact)malloc(sizeof(struct node));
	OPND=(seqstact)malloc(sizeof(struct node));
	OPTR->top =-1;
	OPND->top =-1;
	push(OPTR,'#');
	printf("请输入表达式，以#键结束\n");
	ch=getchar();
	while(ch!='#'||gettop(OPTR)!='#')
	{
		if(!In(ch))  //用于判断字符是否为运算符，是运算符返回1，是操作数返回0
		{
			{
				//存放数字的临时变量
				temp=ch-'0';   //将字符转换为十进制数
				ch=getchar();
			}
			while(!In(ch))
			{
				temp=temp*10+ch-'0';ch=getchar();   //将每个读入的操作数各位转化为十进制数
			}
			push(OPND,temp);  //不是运算符的进栈
		}
		else
		{
			switch(Precede(gettop(OPTR),ch))
			{
			case'<':push(OPTR,ch);/*ch=getchar()*/;break;
			case'=':pop(OPTR,ch);/*ch=getchar()*/;break;
			case'>':pop(OPTR,theta);pop(OPND,b);pop(OPND,a);
				push(OPND,operate(a,theta,b));break;
			}
		}
		v=gettop(OPND);printf("%d\n",v);
	}
		
	return 0;
}