#include <stdio.h>
int main()
{
	int n = 1;
	int i;
	for(i = 1; i <= 13; i++)
	{
		n *= 13;
		n %= 1000;
	}
	printf("%d\n",n);
	return 0;
}