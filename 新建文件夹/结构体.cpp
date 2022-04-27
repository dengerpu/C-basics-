#include<stdio.h>
struct student
{
	long num;
	char name[20];
	char sex;
	int age;
	float score[3];
};
int main ()
{
	struct student stud[3];
	int i,j,sum[3],max_i=0,max;
	for(i=0;i<3;i++)
	{
		sum[i]=0;
		scanf("%ld%s%c%d",&stud[i].num,&stud[i].name,&stud[i].sex,&stud[i].age);
		for(j=0;j<3;j++)
		{
			scanf("%f",&stud[i].score[j]);
			sum[i]+=stud[i].score[j];
		}
	}
	max=sum[0];
	for(i=1;i<3;i++)
	{
		if(sum[i]>max)
		{
			max=sum[i];
			max_i=i;
		}
	}
	for(i=0;i<3;i++)
	{
		if(max_i==i)
		{
			printf("%ld\n%s\n%c\n%d\n",stud[i].num,stud[i].name,stud[i].sex,stud[i].age);
			for(j=0;j<3;j++)
				printf("%f  ",stud[i].score[j]);
		}
	}
	printf("\n");
return 0;
}