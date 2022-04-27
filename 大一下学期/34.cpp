/*34. 输入3个学生4门课的成绩，完成maxaver函数实现如下功能：输出平均成绩最高的学生的所有成绩。（不允许修改main函数）*/
#include<stdio.h>
int score[3][4];
int main()
{
	int i,j;
	void maxaver();	
	printf("\nNO.   cour1 cour2 cour3 cour4\n");
	for(i=0;i<3;i++)
	{
		printf("No %d:",i+1);
		for(j=0;j<4;j++)
			scanf("%d",&score[i][j]);	
	}
	maxaver(score[3][4]);	
	printf("\n");
	return 0;
}
void maxaver(int *p[4]) 
{
	float sum[3],aver[3],max;
	int i,j,k=0;
	for(i=0;i<3;i++)
	{
		sum[i]=0;
		for(j=0;j<4;j++)
			sum[i]+=*(*(p+i)+j);
		aver[i]=sum[i]/4.0;
	}
	max=aver[0];
	for(i=1;i<3;i++)
		if(aver[i]>max)
		{
			max=aver[i];
			k=i;
		}
		for(i=0;i<4;i++)
			printf("%d  ",*(*(p+k)+i));	
}