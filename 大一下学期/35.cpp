/*35. 编写函数，实现B=A+A',即把矩阵A加上A转置，存放在B中

  1   2   3             转置后：  1   4   7
  4   5   6                       2   5   8
  7   8   9                       3   6   9    */
#include <stdio.h>
void fun(int a[3][3],int b[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			if(i==j)
				b[i][j]=a[i][j];
			else
				b[i][j]=a[j][i];
}
void main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},t[3][3];
	int i,j;
	printf("\nthe original data:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%7d",a[i][j]);
		printf("\n");
	}
	fun(a,t);
    printf("\nthe result data:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%7d",t[i][j]);
		printf("\n");
	}
}