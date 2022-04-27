#include<stdio.h>
struct student
{
	int num;
	char name[20];
	char sex;
	union test
	{
		int upward;
		float jump;
	}test1;
}stud[5];
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d%s%c",&stud[i].num,&stud[i].name,&stud[i].sex);
		if(stud[i].sex=='m')
			scanf("%d",&stud[i].test1.upward);
		else
			if(stud[i].sex=='f')
				scanf("%f",&stud[i].test1.jump);
			else
				printf("输入数据有误！");
	}
	printf("学号    姓名  性别  引体向上/跳远\n");
	for(i=0;i<5;i++)
	{
		if(stud[i].sex=='m')
			printf("%-10d%-10s%-4c%8d%个\n",stud[i].name,stud[i].sex,stud[i].test1.upward);
		else 
			if(stud[i].sex=='f')
				printf("%-10d%-10s%-4c%8.1f%个\n",stud[i].name,stud[i].sex,stud[i].test1.jump);
	}
	return 0;
}