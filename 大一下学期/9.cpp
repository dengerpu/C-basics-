/*9. ���õݹ鷽����10����������ʵ�������ֵ�����������޸�main������
�磺����1  2  3  4  5  10  7  8  9  6ʱ�����Ϊ10��00��*/
#include<stdio.h>
float aver(float a[],int n);
float a[10];
void main()
{ 
	int i;
	for(i=0;i<10;i++)
		scanf("%f",&a[i]);
	printf("%.2f\n",aver(a,10));
}
float aver(float a[],int n)
{
	//
	if(n==1)
		return a[n];
	else
		return a[n-1]>aver(a,n-1)?a[n-1]:aver(a,n-1);
	//
}