/*3��	����ģ�⻼��ҽԺ�������̡�
(1)����"���˵���(a)"����ʱ����ӡ�
(2)����"��ʿ����һλ���߾���(n)"����ʱ������ӡ�
(3)����"���ٽ��ղ����Ŷ�(q)"����ʱ�������������Ԫ�س��ӣ�������
*/
#include<stdio.h>
int front =-1,rear=-1;
void insert(int queue[])
{
	int e;
	printf("�����벡��:");
	scanf("%d",&e);
	rear++;
	queue[rear]=e;
}
void push(int queue[])
{
	front++;
	printf("����Ϊ%d���˾���\n",queue[front]);
}
void main()
{
	char ch;
	int queue[100];
	while(1)
	{
		printf("����������:");
		scanf("%c",&ch);
		if(ch=='a')
			insert(queue);
		else if(ch=='n')
			push(queue);
		
		else if(ch=='q')
		{
			printf("����ֹͣ�Һţ����²������ξ���:\n");
			while(front!=rear)
			{
				push(queue);
			}
			break;
		}
	}
}
