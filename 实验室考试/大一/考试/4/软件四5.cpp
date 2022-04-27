#include <stdio.h>
int main()
{
	int a[1000] = {0};
	int n,k;
	int i,j;
	scanf("%d%d",&n,&k);
	for(i = 0; i < n; i++)
	{
		for(j = 1; j <= k; j++)
		{
			if((i+1) % j == 0)
			{
				a[i]++;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		if(a[i] % 2 != 0)
		{
			printf("%d ",i+1);
		}
	}
	puts("");
	return 0;
}
