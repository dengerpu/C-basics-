/*14��
��д���������1��1000֮���ܱ�7��11������������ͬʱ��7��11���������������������Ƿ���a��ָ�������У�ͨ��n������Щ���ĸ�����
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