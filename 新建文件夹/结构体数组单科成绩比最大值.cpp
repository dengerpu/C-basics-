#include <stdio.h>
struct student 
{
	int num;
	char name[20];
	float score;
};
int main()
{
	struct student stud[5];
	int i,max_i=0,max;
	for(i=0;i<5;i++)
	{
		printf("请输入第%d个同学的信息:",i);
		scanf("%d%s%f",&stud[i].num,&stud[i].name,&stud[i].score);
	}
	max=stud[0].score;
	for(i=1;i<5;i++)
	{
		if(stud[i].score>max)
		{
			max=stud[i].score;
			max_i=i;
		}
	}
	for(i=0;i<5;i++)
	{
		if(i==max_i)
			printf("%d  %s  %f  \n",stud[i].num,stud[i].name,stud[i].score);
	}
	return 0;
}