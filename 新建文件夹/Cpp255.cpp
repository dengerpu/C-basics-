#include<stdio.h>
#include<math.h>
int main()
{
	int i=1;
	double sum=0,p=1,k=1.0;
	while(fabs(p)>pow(10,-4))
	{
		p=k/i;
		sum+=p;
		i=i+2;
		k=-k;
	}
	printf("%lf\n",4*sum);
	return 0;
}