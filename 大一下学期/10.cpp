/*10. 编写函数：m个人的成绩放在score数组中，编写函数fun，将低于平均分的人数作为函数值返回，将低于平均分的分数放在below所指数组中。（不允许修改main函数）
如score中的成绩为：10,20,30,40,50,60,70,80,90时，函数返回的人数应是4，below中的数据应为10、20、30、40。*/
#include <stdio.h>
#include <string.h>
int fun(int score[],int m,int below[])
{
	//
	int i,j=0;
	float sum=0.0,aver;
	for(i=0;i<m;i++)
		sum+=score[i];
	aver=sum/m;
	for(i=0;i<m;i++)
		if(score[i]<aver)
		{
			below[j]=score[i];
			j++;
		}
		return j;
		//
}
void main()
{
	int i,n,below[9];
	int score[9]={10,20,30,40,50,60,70,80,90};
	n=fun(score,9,below);
	printf("\nbelow the average score are:");
	for(i=0;i<n;i++)
		printf("%d ",below[i]);
	printf("\n");	
} 