#include<stdio.h>
int main()
{
	double d,sum,t;
	scanf("%lf%lf",&d,&t);
	sum=(6.94*9.8*d*d*t*0.001)/((18*0.309)*(1+2.4*d/36)*(1+1.6*d/490.5));
printf("%lf\n",sum);
	return 0;
}