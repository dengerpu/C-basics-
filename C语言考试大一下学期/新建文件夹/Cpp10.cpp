/*10、买卖提将养的一缸金鱼分n次出售系统上一次卖出全部的一半加二分之一条；
第二次卖出余下的三分之一加三分之一条；
第三次卖出余下的四分之一加四分之一条；第四次卖出余下的五分之一加五分之一条；
最后卖出余下的11条。问原来的鱼缸中共有几条金鱼？
完成递归函数count2，计算鱼缸中的鱼的条数。
输入数据：5
输出数据：There are 59 fishes at first.
*/
#include<stdio.h>
int count2(int n,int m)
{
 if(n==m) return 11;
 else
	 return((count2(n+1,m)*(n+1)+1)/n);
}
int main()
{
   int x; 
   int m;
   scanf("%d",&m);
   x=count2(1,m);
   printf("There are %d fishes at first.\n",x); 
   return 0;
}