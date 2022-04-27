#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 4
#define M 2*N-1
#define MAX 10000
typedef char TElemType;
typedef struct
{
    int weight;
	int parent;
	int lchild;
	int rchild;
}HTnode;
typedef HTnode HuffmanTree[M+1];
typedef char *HuffmanCode[N+1];
//构造哈夫曼树
void createHuffmanTree(HuffmanTree &HT,int *w,int n)
{
	void select(HuffmanTree HT,int k,int &s1,int &s2);
	if(n<=1)
		return;
	for(int i=1;i<=n;i++)
	{	
		HT[i].weight =w[i];
		HT[i].lchild =0;
		HT[i].rchild =0;
		HT[i].parent =0;
		HT[i].rchild =0;
	}
	for(;i<=M;i++)
	{
		HT[i].weight =0;
		HT[i].lchild =0;
		HT[i].parent =0;
		HT[i].rchild =0;
	}
	for(i=n+1;i<=M;i++)
	{
		int s1,s2;
		select(HT,i-1,s1,s2);
		HT[s1].parent =i;
		HT[s2].parent =i;
		HT[i].lchild =s1;
		HT[i].rchild =s2;
		HT[i].weight =HT[s1].weight +HT[s2].weight ;
	}
}
void select(HuffmanTree HT,int k,int &s1,int &s2)
{
	int tmp=MAX,tmpi=0;
	for(int i=0;i<=k;i++)
	{
		if(!HT[i].parent )
		{
			if(tmp>HT[i].weight )
			{
				tmp=HT[i].weight ;
				tmpi=i;
			}
		}
	}
	s1=tmpi;
	tmp=MAX;
	tmpi=0;
	for(i=1;i<=k;i++)
	{
		if((!HT[i].parent )&&(i!=s1))
		{
			if(tmp>HT[i].weight )
			{
				tmp=HT[i].weight ;
				tmpi=i;
			}
		}
	}
	s2=tmpi;	
}
//打印哈夫曼树
void printHuffmanTree(HuffmanTree HT,char ch[])
{
	printf("\n");
	printf("data,weight,parent,lchild,rchild\n");
	for(int i=1;i<=M;i++)
	{
		if(i>N)
		{
			printf(" -, %5d, %5d, %5d, %5d\n",HT[i].weight ,HT[i].parent ,HT[i].lchild ,HT[i].rchild );
		}
		else
		{
			printf(" %c, %5d, %5d, %5d, %5d\n",ch[i],HT[i].weight ,HT[i].parent ,HT[i].lchild ,HT[i].rchild);
		}
	}
	printf("\n");
}
//编码
void encodingHuffmanCode(HuffmanTree HT,HuffmanCode &HC)
{
	char tmp[N];
	tmp[N-1]='\0';
	int start ,c,f;
	for(int i=1;i<=N;i++)
	{
		start=N-1;
		c=i;
		f=HT[i].parent ;
		while(f)
		{
			if(HT[f].lchild ==c)
			{
				tmp[--start]='0';
			}
			else
			{
				tmp[--start]='1';
			}
			c=f;
			f=HT[f].parent ;
		}
		HC[i]=(char *)malloc((N-start)*sizeof(char));
		strcpy(HC[i],&tmp[start]);
	}
}
//打印哈夫曼编码表
void printHuffmanCoding(HuffmanCode HC,char ch[])
{
	printf("\n");
	for(int i=1;i<=N;i++)
	{
		printf("%c:%s\n",ch[i],HC[i]);
	}
	printf("\n");
}
void main()
{
	HuffmanTree HT;
	TElemType ch[N+1];
	int w[N+1];
	printf("请输入%d个字符以及该字符对应的权值\n",N);
	for(int i=1;i<=N;i++)
	{
		scanf("%c,%d",&ch[i],&w[i]);
		getchar();
	}
	createHuffmanTree(HT,w,N);
	printHuffmanTree(HT,ch);

	HuffmanCode HC;
	encodingHuffmanCode(HT,HC);
	printHuffmanCoding(HC,ch);
}