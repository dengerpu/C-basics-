#include<stdio.h>
int sort(int a[],int n)
{
	int i,j,t;
	for(j=0;j<n-1;j++)
		for(i=0;i<n-1-j;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
			return 0;
}
int main()
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,n);
	printf("%d %d",a[0],a[n-1]);
	return 0;
}