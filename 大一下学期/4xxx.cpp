/*4.���õݹ鷨��һ�����ݵ�ƽ��ֵ�����������޸�main������*/
#include <stdio.h>
#include <stdio.h>
float avgint(int a[],int n)
{
	//
if(n=1)
return a[n];
else
return ((a[n-1]+avgint(a,n-1)*(n-1))/n);
//
}
void main()
{
	int a[]={1,2,3,15,5,20,7,8,45,10};
	printf("%.2f",avgint(a,10));
}