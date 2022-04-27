#include<stdio.h>
#include<malloc.h>
#define max 100
typedef struct node
{
	int weight;
	int parent;
	int lchild;
	int rchild;
}huffman[max];
void select(huffman ht,int i,int *a,int *b)
{
	long min1=9999;
	long min2=9999;
	for(int j=1;j<=i;j++)
		if(ht[j].parent==0)
		{
			if(ht[j].weight<min1)
			{	
				min1=ht[j].weight;
				*a=j;
			}
			
		}
		for(j=1;j<=i;j++)
			if(ht[j].parent==0)
			{
				if(ht[j].weight<min2&&j!=*a)
				{	
					min2=ht[j].weight;
					*b=j;
				}
				
			}
}
void creat(huffman ht,int w[],int n)
{
	int i,s1,s2;
	for(i=1;i<=n;i++)
	{
		ht[i].weight=w[i];
		ht[i].parent=0;
		ht[i].lchild=0;
		ht[i].rchild=0;
	}
	for(i=n+1;i<=2*n-1;i++)
	{
		ht[i].weight=0;
		ht[i].parent=0;
		ht[i].lchild=0;
		ht[i].rchild=0;
	}
	for(i=n+1;i<=2*n-1;i++)
	{
		select(ht,i-1,&s1,&s2);
		ht[i].weight=ht[s1].weight+ht[s2].weight;
		ht[s1].parent=i;ht[s2].parent=i;
		ht[i].lchild=s1;ht[i].rchild=s2;
	}
}
void print(huffman ht,int n)
{
	int i;
	for(i=1;i<=2*n-1;i++)
		printf("%3d   %3d   %3d   %3d   \n",ht[i].weight,ht[i].parent,ht[i].lchild,ht[i].rchild);
}
void creatnode(huffman ht,int i)
{
	int j=ht[i].parent;
	if(ht[j].parent !=0)
		creatnode(ht,j);
	if(ht[j].lchild ==i)
		printf("1");
	else
		printf("0");
}
void bianma(huffman ht,int n)
{
	int i;
	char a='a';
	for(i=1;i<=n;i++)
	{
		printf("%c:",a++);
		creatnode(ht,i);
		printf("\n");
	}
}
void main()
{
	int w[100],i;
	char a='a';
	huffman ht;
	for(i=1;i<=4;i++)
	{
		printf("%c:",a++);
		scanf("%d",&w[i]);
	}
	creat(ht,w,4);
	print(ht,4);
	bianma(ht,4);
}

