#include<stdio.h>
#include<malloc.h>
#include<math.h>
typedef struct node
{
	int data;   //���������������������������int����ʾ
	struct node *next;
}*linkstact;
void push(linkstact l,int  e)  //��ջ
{
	linkstact p;
	p=(linkstact)malloc(sizeof(struct node));
	p->data=e;
	p->next=l->next;
	l->next=p;
}
void pop(linkstact l,int *e)  //��ջ
{
	linkstact p;
	p=l->next;
	*e=p->data;
	l->next=p->next;
	free(p);
}
int  getnum(char ch)  //�����ַ���Ӧ������
{
	return ch-'0';
}
int isempty(linkstact l)
{
	if(l->next==NULL)
		return 0;
	else
		return 1;
}
int gettop(linkstact l)
{
	if(l->next==NULL)return 1;
	else return l->next->data;
}
char compare(char ch1, char ch2)
{//ʵ����������ȼ��Ƚ� 
    switch(ch1)
	{
	case '#':
        switch(ch2)
		{
		case '#': return '=';
		case '+':
		case '-':
		case '*':
		case '/':
		case '^': return '<';
        }
        case '+':
            switch(ch2)
			{
			case '#': return '>';
			case '+':
			case '-': return '=';
			case '*':
			case '/':
			case '^': return '<';
            }
			case '-':
				switch(ch2)
				{
                case '#': return '>';
                case '+':
                case '-': return '=';
                case '*':
                case '/':
                case '^': return '<';
				}
				case '*':
					switch(ch2)
					{
					case '#':
					case '+':
					case '-': return '>';
					case '*':
					case '/': return '=';
					case '^': return '<';
					}
					case '/':
						switch(ch2)
						{
						case '#':
						case '+':
						case '-': return '>';
						case '*':
						case '/': return '=';
						case '^': return '<';
						}
						case '^':
							switch(ch2)
							{
							case '#':
							case '+':
							case '-':
							case '*':
							case '/': return '>';
							case '^': return '=';
							}
    }
	
}
int calculate(int a, char op, int b)
{//���� a op b ��ֵ 
    int c;
    switch(op)
	{
	case '-': c = a - b; break;
	case '+': c = a + b; break;
	case '*': c = a * b; break;
	case '/': c = a / b; break;
	case '^': c = pow(a, b); break;
	default : c = 0;
    }
    return c;
}
void main()
{
	linkstact ovs,optr;  //optr,���������ջ
	ovs=(linkstact)malloc(sizeof(struct node));
	optr=(linkstact)malloc(sizeof(struct node));
	ovs->next=NULL;
	optr->next=NULL;
	push(optr,(int)'#');
	printf("\n\nPlease input an expression(Ending with '#'):\n");
	char ch=getchar();
	int num=0,a,b,t,op;
	while(ch!='#'||(char)gettop(optr)!='#')
	{
		while(ch>='0'&&ch<='9')
			num=num*10+getnum(ch);
		ch=getchar();
	}
	if(num!=0)
	{
		push(ovs,num);
		num=0;
	}
	else
	{
		switch(compare(ch,(char)gettop(optr)))
		{
		case'>':push(optr,int(ch));ch=getchar();break;
		case'=':
		case'<':pop(optr, &op); 
			pop(ovs, &a);
			pop(ovs, &b);
			t = calculate(b, (char)op, a);
			push(ovs, t);
			break;
	}}
	t=gettop(ovs);
	printf("%d\n",t);
}