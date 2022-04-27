/*15、
编程：删除一个升序排列的二维数组中重复的数字，重复数字只保留一个。
输入数据：2 2 3 4 4 5 6 6 6 7 7 8
输出数据：2 3 4 5 6 7 8
*/
#include <stdio.h>
void fun(int *tt,int n,int *k)
{
	int i,j=0,b[100];
	b[0]=tt[0];
	for(i=1;i<n;i++)
		if(b[j]!=tt[i])
		{
			j++;
			b[j]=tt[i];
		}
		for(i=0;i<=j;i++)
			tt[i]=b[i];
		*k=j;
}
int main()
{
	int a[12],i,n;
	for(i=0;i<12;i++)
		scanf("%d",&a[i]);
	fun(a,12,&n); 
	for(i=0;i<n;i++) printf("%d ",a[i]); 
	printf("%d",a[n]);
	printf("\n");
	return 0;
}