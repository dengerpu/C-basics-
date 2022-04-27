#include<stdio.h>
#include<math.h>
int f(int n)
{
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)
			return 0;
		return 1;
}
int main()
{
	int n,i,count=0;
	printf("ÇëÊäÈë\n");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
		if(f(i))
		{
			if(f(n-i))
			{
				count++;
				printf("%d=%d+%d\n",n,i,n-i);
			}
		}
		printf("%d\n",count);
}
