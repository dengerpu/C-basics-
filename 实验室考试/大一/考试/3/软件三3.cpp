#include <stdio.h>
float avgint(int a[],int n)
{
if (n == 1)
return a[0];
else
return ((n-1)*avgint(a,n-1)+a[n-1])/n ;
}
void main()
{	int i,a[6];
     for(i=0;i<6;i++)
	 {
		 scanf("%d",&a[i]);
	 }
	printf("%.2f",avgint(a,6));
	printf("\n");
}