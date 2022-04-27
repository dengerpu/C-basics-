                         #include<stdio.h>
int main()
{
	int i,j,sum;
	for(i=1;i<=1000;i++)
	{
		sum = 0;
		for(j=1;j<=i-1;j++)
		{
			if(i%j == 0)
			{
				sum+=j;
			}
		}
		if(i == sum)
		{
			printf("%d 是完数，其因子为:",i);
			for(j=1;j<=i-1;j++) 
			{
				if(i%j == 0)
				{
					printf("%d ",j);
				}
			}
			printf("\n");
		}
	}
	return 0;
}