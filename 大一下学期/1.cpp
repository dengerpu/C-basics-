//1. 有一批成绩，完成函数，实现输出成绩的后三名。（不允许修改main函数）
#include <stdio.h>
void search(int tt[],int min[])
{
//冒泡排序
	int i,j,t;
	for(j=0;j<29;j++)
		for(i=0;i<29-j;i++)
			if(tt[i]>tt[i+1])
			{
				t=tt[i];
				tt[i]=tt[i+1];
				tt[i+1]=t;
			}
			for(i=0;i<3;i++)
				min[i]=tt[i];
//	
/*	选择排序		
       int i,j,t;
			for(i=0;i<29;i++)
				for(j=i+1;j<30;j++)
					if(tt[i]>tt[j])
					{
						t=tt[i];
						tt[i]=tt[j];
						tt[j]=t;
					}
					for(i=0;i<3;i++)
						min[i]=tt[i];
*/					
}
int main()
{
	int score[30]={76,78,82,69,90,95,97,89,53,59,88,86,79,76,59,91,76,78,82,69,90,91,93,80,54,
		59,88,86,78,76},min[3],i;//score存储30个学生成绩，max存储成绩的后三名
	printf("the original data is :\n");
	for(i=0;i<30;i++)
		printf("%3d",score[i]);
	printf("\n");
	search(score,min);
	printf("the result data is :\n");
	printf("tha maxest is %d,the maxer is %d,the max is %d\n",min[0],min[1],min[2]);
	return 0;
}