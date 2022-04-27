#include<stdio.h>
#include<malloc.h>
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
void preorder(bitree root)
{
	if(root!=NULL)
	{
		printf("%3c",root->data);
		preorder(root->lchild);
		preorder(root->rchild);
	}
}
void inorder(bitree root)
{
	if(root!=NULL)
	{
		inorder(root->lchild);
		printf("%3c",root->data);
		inorder(root->rchild);
	}
}
void postorder(bitree root)
{
	if(root!=NULL)
	{
		postorder(root->lchild);
		postorder(root->rchild);
		printf("%3c",root->data);
	}
}
void main()
{
bitree root;
root=creat();
printf("\n先序遍历输出为：\n");
preorder(root);
printf("\n中序遍历输出为：\n");
inorder(root);
printf("\n后序遍历输出为：\n");
postorder(root);
}