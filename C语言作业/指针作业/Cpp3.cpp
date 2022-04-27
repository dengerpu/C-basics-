//3、一个班，有3个学生，4门课程，求两门以上课程不及格的学生?
#include<stdio.h>
int main()
{
	float a[3][5],(*p)[5];
	p=a;
	int i,j,b[3]={0};
	printf("请输入:\n");
	printf("学生编号：语文：数学：英语：C语言：\n");
	for(i=0;i<3;i++)
		for(j=0;j<5;j++)
			scanf("%f",*(p+i)+j);
		for(i=0;i<3;i++)
			for(j=1;j<5;j++)
				if(*(*(p+i)+j)<60)
					b[i]++;
				printf("学生编号：语文：数学：英语：C语言：\n");
				for(i=0;i<3;i++)
				{
					if(b[i]>=2)
					{
						printf("%.0f",**(p+i));
						for(j=1;j<5;j++)
							printf("  %.2f",*(*(p+i)+j));
					}
						printf("\n");
				}
				return 0;									
}
