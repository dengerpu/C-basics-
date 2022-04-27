#include<stdio.h>
struct student
{
	int num;
	char name[20];
	float score[3];
};
int main()
{
	struct student stud[3],*p;
	int i=0,j,max_i=0;
	float sum[3],max;
	for(p=stud;p<stud+3;p++)
	{
		sum[i]=0;
		scanf("%d%s",&p->num,p->name);
		for(j=0;j<3;j++)
		{
			scanf("%f",&p->score[j]);
			sum[i]+=p->score[j];
		}
		i++;
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
		if(max_i==i)
		{
			printf("%d\n%s\n",stud[i].num,stud[i].name);
			for(j=0;j<3;j++)
				printf("%f",stud[i].score[j]);
			puts("");
		}
		return 0;
}
