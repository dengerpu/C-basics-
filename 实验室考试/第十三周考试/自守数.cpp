#include<stdio.h>
void main()
{
	int i,n,t,b,sum;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		t=i;
		sum=1;
		while(t>0)
		{
			sum*=10;
			t=t/10;
		}
		b=(i*i)%sum;
		if(b==i)
			printf("%d ",i);
	}	
}