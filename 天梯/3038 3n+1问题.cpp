/*3n+1问题是一个简单有趣而又没有解决的数学问题。这个问题是由L. Collatz在1937年提出的。克拉兹问题（Collatz problem）也被叫做hailstone问题、3n+1问题、Hasse算法问题、Kakutani算法问题、Thwaites猜想或者Ulam问题。
问题如下：
（1）输入一个正整数n；
（2）如果n=1则结束；
（3）如果n是奇数，则n变为3n+1，否则n变为n/2；
（4）转入第（2）步。
克拉兹问题的特殊之处在于：尽管很容易将这个问题讲清楚，但直到今天仍不能保证这个问题的算法对所有可能的输入都有效——即至今没有人证明对所有的正整数该过程都终止。*/
#include<stdio.h>
int f(int n)
{
	int j=0;
	while(n!=1)
	{
		if(n%2==0)
			n=n/2;
		else
			n=3*n+1;
		j++;
	}
	return j;
}
int main()
{
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%d\n",f(a[i]));
return 0;
}