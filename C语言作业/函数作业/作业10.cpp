
/*10、买卖提将养的一缸金鱼分五次出售系统上一次卖出全部的一半加二分之一条；
第二次卖出余下的三分之一加三分之一条；第三次卖出余下的四分之一加四分之一条；
第四次卖出余下的五分之一加五分之一条；最后卖出余下的11条。
问原来的鱼缸中共有几条金鱼？*/
#include<stdio.h>
double fish(int n)
{
	if(n==5)
		return 11;
	else
		return (1.0*(n+1)/n)*(fish(n+1)+1.0/(n+1));
}
int main()
{
	double n;
	n=fish(1);
	printf("%.0lf\n",n);
	return 0;
}
