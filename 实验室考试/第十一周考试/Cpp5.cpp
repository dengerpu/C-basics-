#include<stdio.h>
#include<malloc.h>
int hl,hr,max,h=1,depth=0;
typedef struct node
{
	char data;
	struct node *lchild;
	struct node *rchild;
}*bitree;
bitree creat()
{
	bitree root;
	char ch;
	ch=getchar();
	if(ch=='0') root=NULL;
	else
	{
		root->data=ch;
		root->lchild=creat();
		root->rchild=creat();
	}
	return(root);
}
void print(bitree root,int n)
{
	if(root==NULL) return;
	print(root->rchild ,n+1);
	for(int i=0;i<n;i++)
		printf("	");
	printf("%3c",root->data );
	print(root->lchild ,n+1);
}
int depth1(bitree root)
{
	if(root!=NULL)
	{
		hl=depth1(root->lchild);
		hr=depth1(root->rchild);
		max=hl>hr?hl:hr;
		return (max+1);
	}
	else return 0;
} 
void depth2(bitree root,int h)
{
	if(root!=NULL)
	{
		if(h>depth)depth=h;
		depth2(root->lchild,h+1);
		depth2(root->rchild,h+1);
	}
}
void main()
{
	bitree root;
	root=creat();
	print(root,0);
	depth1(root);
	printf("树的深度为%d\n",max+1);
	depth2(root,h);
	printf("树的深度为%d\n",depth);
}