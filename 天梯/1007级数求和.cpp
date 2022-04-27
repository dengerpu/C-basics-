/*已知：Sn= 1＋1／2＋1／3＋…＋1／n。显然对于任意一个整数K，当n足够大的时候，Sn大于K。
　　现给出一个整数K（1<=k<=15），要求计算出一个最小的n；使得Sn＞K。*/
#include<stdio.h>
int main()
{
	int i,k,n;
	scanf("%d",&k);
	double sum=0;
	for(i=1;;i++)
	{
		sum+=1.0/i;
		n=i;
		if(sum>k)
			break;
	}
	printf("%d\n",i);
	return 0;
}