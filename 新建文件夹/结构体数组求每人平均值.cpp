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
		printf("�������%d��ͬѧ����Ϣ:",i+1);
		scanf("%d%s",&stud[i].num,&stud[i].name);
		for(j=0;j<3;j++)
		{
			scanf("%f",&stud[i].score[j]);
			sum[i]+=stud[i].score[j];
		}
		puts("");
		aver[i]=sum[i]/3.0;
		printf("ƽ����:%.2f",aver[i]);
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
			printf("ѧ�ţ�%d\n����:%s\n",stud[i].num,stud[i].name);
			printf("�ɼ���");
			for(j=0;j<3;j++)
				printf("%f",stud[i].score[j]);
			printf("ƽ����Ϊ��%f",aver[i]);
			puts("");
		}
	}
	return 0;
}