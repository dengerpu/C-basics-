#include <stdio.h>
int main()
{
	int t1,t2,t3,t4;
	int n;
	int i;
	int count = 0;
	int a[1000] = {0};
	scanf("%d%d%d%d%d",&t1,&t2,&t3,&t4,&n);
	for(i = 0; i < n; i++)
	{
		if(a[i*t1] == 0)
		{
			a[i*t1] = 1;
			count++;
		}
		if(a[i*t2] == 0)
		{
			a[i*t2] = 1;
			count++;
		}
		if(a[i*t3] == 0)
		{
			a[i*t3] = 1;
			count++;
		}
		if(a[i*t4] == 0)
		{
			a[i*t4] = 1;
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}