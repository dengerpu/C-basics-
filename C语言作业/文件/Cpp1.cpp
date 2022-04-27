#include<stdio.h>
#include<malloc.h>
#define max_vex 100
typedef struct node
{
	int adjvex;
	struct node *next;
}arcnode;
typedef struct
{
	int vertex;
	arcnode *firstarc;
}vexnode;
vexnode adjlist[max_vex][max_vex];
int creatlist()
{
	arcnode *ptr;
	int vexnum,arcnum,i,v1,v2;
	printf("请输入顶点数和边数\n");
	scanf("%d%d",&vexnum,&arcnum);
	for(i=1;i<=vexnum;i++)
		adjlist[i].firstarc=0;
	for(i=0;i<vexnum;i++)
	{
		printf("v1,v2=");
		scanf("%d%d",&v1,&v2);
		ptr=(arcnode *)malloc(sizeof(struct node));
		ptr->adjvex=v2;
		ptr->next=adjlist[v1].firstarc;
		adjlist[v1].firstarc=ptr;
		//对于有向图，以下四行代码要删除
		ptr=(arcnode *)malloc(sizeof(struct node));
		ptr->adjvex=v1;
		ptr->next=adjlist[v2].firstarc;
		adjlist[v2].firstarc=ptr;
	}
	return(vexnum);
}
void bfs(int v)
{
	int queue[max_vex];
	int front=0,rear=1;
	arcnode *p;
	p=adjlst[v].firstarc;
	printf("%d",v);
	adjlist[v].vertex=1;
	queue[rear]=v;
	while(front!=rear)
	{
		front=(front+1)%max_vex;
		queue[front]=v;
		p=adjlist[v].firstarc;
		while(p!=NULL)
		{
			if(adjlist[p->adjvex].vextex==0)
			{
				adjlist[p->adjvex].vextex=1;
				printf("%d",p->adjvex);
				rear=(rear+1)%max_vex;
				queue[rear]=p->adjvex;
			}
			p=p->next;
		}
	}
}
void main()
{
	int i,n,v;
	arcnode *p;
	n=creatlist();
	printf("所建图的邻接表为:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d==>",i);
		p=adjlist[i].firstarc;
		while(p!=NULL)
		{
			printf("-->%d",p->adjvex);
			p=p->next;
		}	
		printf("\n");
	}
	printf("输入广度优先搜索序列起始顶点")
}