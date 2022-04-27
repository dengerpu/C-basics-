/* Note:Your choice is C IDE */
#include "stdio.h"
#define MAXSIZE 40
typedef struct 
{
	int date;
	int cursor;//�α�:��ŵ������̽���ڽṹ�����е����λ�ã��������±�ֵ��
}Component,StaticList[MAXSIZE];
void Initial(StaticList s,int *av);
int GetNode(StaticList s,int *av);
void FreeNode(StaticList s,int *av,int k);
void show(StaticList s,int *av);
//void  Pop(StaticList s,int pos,int *av);
void main()
{
    StaticList s;
    int *av,i=1,len,k,bt=1,sum=0,pos1,pos2,score1,score2;
    av=&bt;
    Initial(s,av);
    printf("Ԫ�ظ���Ϊ��\n");
    scanf("%d",&len);
    printf("��ֵ��\n");
    for(i=1;i<=len;i++)
    {
    	k=GetNode(s,av);
    	scanf("%d",&s[k].date);
    }
    //show(s,av);
    printf("����������ɾ��λ��:\n");
    scanf("%d%d",&pos1,&pos2);
    s[pos2-1].cursor=s[pos2].cursor;
    FreeNode(s,av,pos2);
    s[pos1-1].cursor=s[pos1].cursor;
    FreeNode(s,av,pos1);
    show(s,av);
    printf("������ȷ����:\n");
    scanf("%d%d",&score1,&score2);
    i=GetNode(s,av);
    s[i].date=score1;
    i=GetNode(s,av);
    s[i].date=score2;
    show(s,av);
    i=s[0].cursor;
    for(;i!=*av;i=s[i].cursor)
    	sum+=s[i].date;
    //printf("%d",sum);
    printf("���ƽ����:%.3f",(double)sum/len);
}
void Initial(StaticList s,int *av)
{
	int i;
	for(i=0;i<MAXSIZE-1;i++)
		s[i].cursor=i+1;
	s[MAXSIZE-1].cursor=-1;
	*av=1;
}
int GetNode(StaticList s,int *av)
{
	int i;
	i=*av;
	*av=s[*av].cursor;
	return i;
}
void FreeNode(StaticList s,int *av,int k)
{
	int i,b;
	for(i=s[0].cursor;i!=*av;i=s[i].cursor)
		b=i;
	s[k].cursor=*av;
	*av=k;
	s[b].cursor=*av;
}
void show(StaticList s,int *av)
{
	int i;
	i=s[0].cursor;
	printf("��ʱ��̬����sΪ:\n");
	while(i!=*av)
	{
		printf("%d ",s[i].date);
		i=s[i].cursor;
	}
	puts("");
}