/*8�����õݹ鷽����10����������ʵ�������ֵ��
�������ݣ�1  2  3  4  5  6  7  8  10  9
������ݣ�10
*/
#include<stdio.h>
void main()
{ 
int i,a[10];
int aver(int [],int);
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("%d\n",aver(a,10));
}
int aver(int a[],int n)
{
 if(n==1)
	 return a[0];
 else
	 return (a[n-1]>aver(a,n-1)?a[n-1]:aver(a,n-1));
}