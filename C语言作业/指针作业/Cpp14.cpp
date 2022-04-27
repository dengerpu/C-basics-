/*14、
编写函数，求出1到1000之间能被7或11整除，但不能同时被7或11整除的所有整数并将它们放在a所指的数组中，通过n返回这些数的个数。
*/
#include <stdio.h>
void fun(int *a,int *n)
{
  int i,j=0;
  for(i=1;i<=1000;i++)
	 {
	  if(i%7==0&&i%11==0)
		  continue;
	  else
	  {
		  *(a++)=i;
		  j++;
	  }
  }
	  *n=j;

}
void main()
{
	int aa[1000],n,k;
	fun(aa,&n);
	for(k=0;k<n;k++)
		if ((k+1)%10==0) printf("\n");
		else printf("%5d",aa[k]);
}