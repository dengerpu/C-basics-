#include<stdio.h>
struct student
{
	int num;
	char name[20];
	float score;
};
void sort(struct student stud[],int n)
{
	struct student temp;
	int i,j,k;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(stud[j].score>stud[i].score)
			{
				temp=stud[i];
				stud[i]=stud[j];
				stud[j]=temp;
			}
}
int main()
{
	struct student stud[3]={{1001,"zhangsan",30},{1002,"lisi",50},{1003,"deng",40}};
	sort(stud,3);
	int i;
	for(i=0;i<3;i++)
		printf("%d%s%f\n",stud[i].num,stud[i].name,stud[i].score);
	return 0;
}