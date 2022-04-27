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

//≥ı ºªØ’ª
void InitStack(Stack *S)
{
    S->top=-1;
}

//≈–ø’
int NullStack(Stack *S)
{
    if(S->top==-1)
		return 1;
	else
		return 0;
}

//»Î’ª
int Push(Stack *S,StackElementType ch)
{
    if(S->top == MAX_SIZE - 1)
        return (FALSE);
    S->top++;
    S->elem[S->top]=ch;
    return (TRUE);
}

//≥ˆ’ª
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

//∂¡»°’ª∂•‘™Àÿ
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

//¿®∫≈∆•≈‰
int Match(StackElementType ch1,StackElementType ch2)
{
    if((ch1 == '(' && ch2 == ')') || (ch1 == '[' && ch2 == ']') || (ch1 == '{' && ch2 == '}'))
        return (TRUE);
   else
	   return (FALSE);
}

//∆•≈‰
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
                printf("\n”“¿®∫≈∂‡”‡!\n");
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
                    printf("\n◊Û”“¿®∫≈≤ª∆•≈‰!\n");
                    return;
                }
            }
        }
    }
    if(NullStack(&S))
        printf("\n¿®∫≈∆•≈‰!\n");
    else
    {
        printf("\n◊Û¿®∫≈∂‡”‡!\n");
    }
}

int main()
{
    char str[MAX_SIZE];
    printf("«Î ‰»Î“™∆•≈‰µƒ¿®∫≈:");
    gets(str);
    BracketMatch(str);
    return 0;
}
