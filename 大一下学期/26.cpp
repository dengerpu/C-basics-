/*26. 一个班不超过30个人，人员信息有成绩和学号组成，班级人数从键盘输入，完成函数，实现求出班级中最高分和学号，将学生信息按照成绩从高到低输出。（不允许修改main函数）*/
#include  <stdio.h>
#define ARR_SIZE 30
struct student
{
	int st;
	long num;
};
int findmax(struct student score[],int n,long *pmaxnum)
{
	//
	int i,j=0,max=score[0].st;
	for(i=1;i<n;i++)
		if(score[i].st>max)
		{
			max=score[i].st;
			j=i;
		}
		*pmaxnum=score[j].num;	
		return max;
		//
}
void sortscore(struct student *score,int n)
{
	int i,j;
	struct student temp1;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if (score[i].st<score[j].st)
			{
				temp1=score[i];score[i]=score[j];score[j]=temp1;			    
			}	
}
int main()
{
	long maxnum;
	struct student score[ARR_SIZE];
	int maxscore,n,i;
	printf("Please enter total number:");
	scanf("%d", &n);	/*从键盘输入学生人数n*/
	printf("Please enter the number and score:\n");
	for(i=0; i<n; i++) 	
	{
		scanf("%ld%d", &score[i].num,&score[i].st);
	}
	maxscore = findmax(score,n, &maxnum);  /*计算最高分及学生学号*/
	printf("maxscore = %d, maxnum = %ld\n", maxscore, maxnum);
	sortscore(score,n);
	printf("The sort after data is :\n");
	for(i=0;i<n;i++)
		printf("%ld,%d\n",score[i].num,score[i].st);
	return 0;
}