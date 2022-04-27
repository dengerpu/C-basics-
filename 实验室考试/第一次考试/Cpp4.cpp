/*题目描述?Description
现代数学的著名证明之一是Georg Cantor证明了有理数是可枚举的。他是用下面这一张表来证明这一命题的： 1/1 1/2 1/3 1/4 1/5 … 2/1 2/2 2/3 2/4 … 3/1 3/2 3/3 … 4/1 4/2 … 5/1 … … 我们以Z字形给上表的每一项编号。第一项是1/1，然后是1/2，2/1，3/1，2/2，…

  输入描述?Input Description
  整数N（1≤N≤10000000）
  输出描述?Output Description
  表中的第N项
  样例输入?Sample Input
  7
  样例输出?Sample Output
  1/4
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	int a[10000000],b=0,c[10000000],d[10000000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(i%2!=0)
		{
			for(j=i,k=1;j>=1,k<=i;j--,k++)
			{
				c[b]=j;
				d[b]=k;
				b++;
			}
			//	printf("%d/%d ",j,k);
		}
		else
		{
			for(j=1,k=i;j<=i,k>=1;j++,k--)
			{
				c[b]=j;
				d[b]=k;
				b++;
			}
			//printf("%d/%d ",j,k);
		}
				printf("%d/%d\n",c[n-1],d[n-1]);
			return 0;
}