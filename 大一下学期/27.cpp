//27. 完成sort函数，实现：按照成绩从高到低的顺序输出各学生的信息。（不允许修改main函数）
#include<stdio.h>
#define N 5
struct student
{
	int num;
	char name[20];
	float score;
};
void sort(struct student stu[])
{
	int i,j;
	struct student t;
	for(j=0;j<N-1;j++)
		for(i=0;i<N-1-j;i++)
			if(stu[i].score<stu[i+1].score)
			{
			t=stu[i];
			stu[i]=stu[i+1];
			stu[i+1]=t;
			}

}
int main()
{
	struct student stu[N];	
	int i;
	printf("请输入所有学生的信息:学号、姓名、成绩:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d%s%f",&stu[i].num,stu[i].name,&stu[i].score);
	}
	printf("The order is :\n");	
	sort(stu);
	for(i=0;i<N;i++)
		printf("%6d %8s %6.2f\n",stu[i].num,stu[i].name,stu[i].score);
	return 0;
} 