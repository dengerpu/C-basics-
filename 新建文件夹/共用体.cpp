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
				printf("������������");
	}
	printf("ѧ��    ����  �Ա�  ��������/��Զ\n");
	for(i=0;i<5;i++)
	{
		if(stud[i].sex=='m')
			printf("%-10d%-10s%-4c%8d%��\n",stud[i].name,stud[i].sex,stud[i].test1.upward);
		else 
			if(stud[i].sex=='f')
				printf("%-10d%-10s%-4c%8.1f%��\n",stud[i].name,stud[i].sex,stud[i].test1.jump);
	}
	return 0;
}