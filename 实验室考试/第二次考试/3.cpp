/*第三题。
给定K个整数组成的序列{ N1, N2, ..., NK }，"连续子列"被定义为{ Ni, Ni+1, ..., Nj }，其中 1≤i≤j≤K。"最大子列和"则被定义为所有连续子列元素的和中最大者。
例如给定序列{ -2, 11, -4, 13, -5, -2 }，其连续子列{ 11, -4, 13 }有最大的和20。现要求你编写程序，计算给定整数序列的最大子列和
输入2行
第一行 输入的整数个数
第二行 输入这些整数
输出 最大子列和*/
#include<stdio.h>
int main()
{
	int n,a[100],k,c,max;
	int i,j,sum[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		sum[i]=0;
		for(j=i+1;j<n;j++)
			sum[i]=a[i]+a[j];
	}
	j=n-1;
	for(i=0;i<n-1;i++)
	{
		k=i+1;
		while(k<n)
		{
			sum[j]=a[i]+a[k];
			j++;
		}
	}
	c=j;
	for(i=0;i<n-1;i++)
	{
		j=i+1;
		while(j<n)
		{
			sum[c]=a[i]+a[j];
			c++;
			j++;
		}
	}
	max=sum[0];
	for(i=0;i<c;i++)
		if(sum[i]>max)
			max=sum[i];
		printf("%d\n",max);	
		return 0;
}