/*3、	队列模拟患者医院看病过程。
(1)当有"病人到达(a)"命令时，入队。
(2)当有"护士让下一位患者就诊(n)"命令时，则出队。
(3)当有"不再接收病人排队(q)"命令时，则队列中所有元素出队，程序终
*/
#include<stdio.h>
int front =-1,rear=-1;
void insert(int queue[])
{
	int e;
	printf("请输入病号:");
	scanf("%d",&e);
	rear++;
	queue[rear]=e;
}
void push(int queue[])
{
	front++;
	printf("病号为%d的人就诊\n",queue[front]);
}
void main()
{
	char ch;
	int queue[100];
	while(1)
	{
		printf("请输入命令:");
		scanf("%c",&ch);
		if(ch=='a')
			insert(queue);
		else if(ch=='n')
			push(queue);
		
		else if(ch=='q')
		{
			printf("今天停止挂号，以下病人依次就诊:\n");
			while(front!=rear)
			{
				push(queue);
			}
			break;
		}
	}
}
