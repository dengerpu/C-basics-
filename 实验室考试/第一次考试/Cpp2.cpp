/*第二题
明明的随机数
?
2006年NOIP全国联赛普及组
?时间限制: 1 s
?空间限制: 128000 KB
?题目等级 : 白银 Silver
题解
题目描述?Description
明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，他先用计算机生成了N个1到1000之间的随机整数（N≤100），对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作。
输入描述?Input Description
有1行，为1个正整数，表示所生成的随机数的N个数：?
输出描述?Output Description
第1行为M个随机数，按原顺序用空格隔开
第2行为“去重”后的随机正整数个数N
第3行为N个用空格隔开的正整数，为从小
到大排好序的不相同的随机数。
样例输入?Sample Input
10
样例输出?Sample Output
234 711 22 544 104 845 129 479 634 163
10
22 104 129 163 234 479 544 634 711 845
*/
#include<stdio.h>
int sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			return 0;
}
int main()
{
	int a[100],n,i,j,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
			{
				t=a[j];
				a[j]=a[n-1];
				a[n-1]=t;
				n--;
			}
			sort(a,n);
			for(i=0;i<n;i++)
				printf("%d ",a[i]);
			printf("\n");
			return 0;
}