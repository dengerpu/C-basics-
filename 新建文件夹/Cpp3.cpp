#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
#include <string.h>
#define StackElementType char
#define MAX_SIZE 50
#define TRUE 1
#define FALSE 0

typedef struct
{
    StackElementType elem[MAX_SIZE];
    int top;
} Stack;

//��ʼ��ջ
void InitStack(Stack *S)
{
    S->top=-1;
}

//�п�
int NullStack(Stack *S)
{
    if(S->top==-1)
		return 1;
	else
		return 0;
}

//��ջ
int Push(Stack *S,StackElementType ch)
{
    if(S->top == MAX_SIZE - 1)
        return (FALSE);
    S->top++;
    S->elem[S->top]=ch;
    return (TRUE);
}

//��ջ
int Pop(Stack *S,StackElementType *ch)
{
    if(S->top==-1)
        return (FALSE);
    else
    {
        *ch = S->elem[S->top];
        S->top--;
        return (TRUE);
    }
}

//��ȡջ��Ԫ��
int GetTop(Stack *S,StackElementType *ch)
{
    if(S->top == -1)
        return (FALSE);
    else
    {
        *ch = S->elem[S->top];
        return (TRUE);
    }
}

//����ƥ��
int Match(StackElementType ch1,StackElementType ch2)
{
    if((ch1 == '(' && ch2 == ')') || (ch1 == '[' && ch2 == ']') || (ch1 == '{' && ch2 == '}'))
        return (TRUE);
   else
	   return (FALSE);
}

//ƥ��
void BracketMatch(char *str)
{
    Stack S;
    InitStack(&S);
    int i;
    StackElementType ch;
    for(i = 0; str[i] != '\0'; i++)
    {
        switch(str[i])
        {
        case '(':
        case '[':
        case '{':
            Push(&S,str[i]);
            break;
        case ')':
        case ']':
        case '}':
            if(NullStack(&S))
            {
                printf("\n�����Ŷ���!\n");
                return;
            }
            else
            {
                GetTop(&S,&ch);
                if(Match(ch,str[i]))
                {
                    Pop(&S,&ch);
                }
                else
                {
                    printf("\n�������Ų�ƥ��!\n");
                    return;
                }
            }
        }
    }
    if(NullStack(&S))
        printf("\n����ƥ��!\n");
    else
    {
        printf("\n�����Ŷ���!\n");
    }
}

int main()
{
    char str[MAX_SIZE];
    printf("������Ҫƥ�������:");
    gets(str);
    BracketMatch(str);
    return 0;
}
