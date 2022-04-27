#include <stdio.h>
struct student 
{
	int num;
	char name[20];
	float score[3];
};
int main()
{
	struct student stud[5];
	int i,max_i=0,max,j,sum[5];
	float aver[5];
	for(i=0;i<5;i++)
	{
		sum[i]=0;
		printf("请输入第%d个同学的信息:",i+1);
		scanf("%d%s",&stud[i].num,&stud[i].name);
		for(j=0;j<3;j++)
		{
			scanf("%f",&stud[i].score[j]);
			sum[i]+=stud[i].score[j];
		}
		puts("");
		aver[i]=sum[i]/3.0;
		printf("平均分:%.2f",aver[i]);
		puts("");
	}
	max=sum[0];
	for(i=1;i<5;i++)
	{
		if(sum[i]>max)
		{
			max=sum[i];
			max_i=i;
		}
	}
	for(i=0;i<5;i++)
	{
		if(i==max_i)
		{
			printf("学号：%d\n姓名:%s\n",stud[i].num,stud[i].name);
			printf("成绩：");
			for(j=0;j<3;j++)
				printf("%f",stud[i].score[j]);
			printf("平均分为：%f",aver[i]);
			puts("");
		}
	}
	return 0;
}