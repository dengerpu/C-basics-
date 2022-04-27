/*设表达式中包含三种括号：圆括号，方括号和花括号，
他们可互相嵌套（[ {}  ] ([ ] )）或（{ ( [ ][ ( )] )}）等均为正确的格式，而{ [ ] } ) },或( [ ] }均为不正确的格式。
使用栈来检查括号是否匹配*/
#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct node
{
	char data;
	struct node *next;
}*seqstact;
void creat_stact(seqstact l,char *a)
{
	seqstact p;
	int i=0;
	for(i=0;i<strlen(a);i++)
	{
		p=(seqstact)malloc(sizeof(struct node));
		p->data=a[i];
		l->next=p;
		l=p;
	}
	l->next=NULL;
}
void out_stact(seqstact l)
{
	seqstact p;
	p=l->next;
	while(p!=NULL)
	{
		printf("%c",p->data);
		p=p->next;
	}
	printf("\n");
}
/*void panduan_stact(seqstact l,int n)
{
	int j=0;
	seqstact p;
	p=l;
   while(j<n)
   {
   p=p->next;
    j++;
   }
	if(l->next->data==p->data)
	printf("正确\n");
	else
	printf("错误\n");
}
*/
main()
{
	char a[100];
		printf("请输入\n");
	gets(a);
	seqstact l;
	int n,j;
	n=strlen(a);
	l=(seqstact)malloc(sizeof(struct node));
	creat_stact(l,a);
	out_stact(l);
//	panduan_stact(l,n);
	for(i=)
}