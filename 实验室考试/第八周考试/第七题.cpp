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
/*char Precede(char a,char b)   //��������ȼ�
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
	char ch;  //ch���ڱ��������ʽ���ַ�
	seqstact OPTR,OPND;  //OPTR�����ջ��OPND������ջ
	OPTR=(seqstact)malloc(sizeof(struct node));
	OPND=(seqstact)malloc(sizeof(struct node));
	OPTR->top =-1;
	OPND->top =-1;
	push(OPTR,'#');
	printf("��������ʽ����#������\n");
	ch=getchar();
	while(ch!='#'||gettop(OPTR)!='#')
	{
		if(!In(ch))  //�����ж��ַ��Ƿ�Ϊ������������������1���ǲ���������0
		{
			{
				//������ֵ���ʱ����
				temp=ch-'0';   //���ַ�ת��Ϊʮ������
				ch=getchar();
			}
			while(!In(ch))
			{
				temp=temp*10+ch-'0';ch=getchar();   //��ÿ������Ĳ�������λת��Ϊʮ������
			}
			push(OPND,temp);  //����������Ľ�ջ
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