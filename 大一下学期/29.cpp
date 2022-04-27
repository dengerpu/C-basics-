//29. 学生记录由学号和成绩组成，N名学生的数据已经在主函数中放入结构体数组，编写函数，把低于平均分的学生数据放在b所指的数组中，低于平均分的学生人数通过形参n返回，平均分通过函数值返回（不允许修改main函数）
#include <stdio.h>
#define N 8
typedef struct 
{
	char num[10];
	double s;
}STREC;
double fun(STREC *a,STREC *b,int *n)
{
	double aver,sum=0.0;
	int i,j=0;
	for(i=0;i<N;i++)
		sum=sum+(a+i)->s;
	aver=sum/N;
	for(i=0;i<N;i++)
		if((a+i)->s<aver)
		{
			*(b+j)=*(a+i);
			j++;
		}
		*n=j;
		return aver;
		
}
void main()
{
	STREC s[N]={{"gao05",85},{"gao03",76},{"gao02",69},{"gao04",85},{"gao01",91},{"gao07",72},{"gao08",64},{"gao06",87}};
	STREC h[N],t;
	int i,j,n;
	double ave;
	ave=fun(s,h,&n);
	printf("the %d student data which is lower than %7.3f:\n",n,ave);
	for(i=0;i<n;i++)
		printf("%s %4.1f\n",h[i].num,h[i].s);
	printf("\n");	
}