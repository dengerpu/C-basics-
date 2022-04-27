#include<stdio.h>
int main()
{
	int a[30], b[100], i, j, n;

	scanf("%d", &n);
	i=1;
	b[1]=1;
	printf("%d\n",b[1]);
	i=2;
	b[1]=b[2]=1;
	printf("%d\t%d\n",b[1], b[2]);
	for(i=3; i<n+1; i++)
	{
		a[1]=a[i]=1;
		for (j=2; j<i; j++)
			a[j]=b[j]+b[j-1];
		for (j=1; j<=i; j++)
			printf("%d\t",a[j]);
		printf("\n");
		for(j=1; j<=n; j++)
			b[j]=a[j];
	}
	return 0;
}