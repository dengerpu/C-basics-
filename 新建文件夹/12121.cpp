#include<stdio.h>
#define Stack_Size 1000
#define false 0
#define true 1
typedef struct{
	char elem[Stack_Size];
	int top;
}Stack;
void InitStack(Stack * S)
{
	S->top=-1;
}
int Push(Stack * S,char x)
{
	if(S->top==Stack_Size-1)
		return(false);
	S->top++;
	S->elem[S->top]=x;
	return(true);
}
int GetTop(Stack *S,char *x)
{
	if(S->top==-1)
		return(false);
	else
	{
		*x=S->elem[S->top];
		return(true);
	}
}
int Match(char a,char b)
{
	if(a=='('&&b==')')
		return true;
	else if(a=='['&&b==']')
		return true;
	else if(a=='{'&&b=='}')
		return true;
	else
		return false;
}
int Pop(Stack * S,char *x)
{
	if(S->top==-1)
		return(false);
	else
	{
		* x=S->elem[S->top];
		S->top--;
		return(true);
	}
}
void BracketMatch(char * str)
{
	Stack S;
	int i;
	char ch;
	int r=0,l=0,flag=1;
	InitStack(&S);
	for(i=0;str[i]!='\0';i++)
	{
		switch(str[i]){
		case'(':
		case'[':
		case'{':
			Push(&S,str[i]);
			l++;
			break;
		case')':
		case']':
		case'}':
			r++;
			printf("%d\n",r);
				if(S.top==-1)
				{
					printf("NO\n");
					return;
				}
			else
			{
				GetTop(&S,&ch);
				if(Match(ch,str[i]))
					Pop(&S,&ch);
				else
				{
					if(str[i]=='\0')
						return;
				}
			}
		}
	}
	printf("%d %d\n",l,r);
	if(S.top==-1)
		printf("YES\n");
	else
		printf("NO\n");
}
int main()
{
	char str[Stack_Size];
	gets(str);
	BracketMatch(str);
	return 0;
}
