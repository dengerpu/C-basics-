//2、一个班，有3个学生，4门课程，编程求有课程不及格的学生所有课程?
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
					b[i]=1;
				printf("学生编号：语文：数学：英语：C语言：\n");
				for(i=0;i<3;i++)
				{
					if(b[i]==1)
					{
						printf("%.0f",**(p+i));
						for(j=1;j<5;j++)
							printf("  %.2f",*(*(p+i)+j));
					}
						printf("\n");
				}
				return 0;									
}
