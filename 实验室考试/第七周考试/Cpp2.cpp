//某人有四张3分的邮票和三张5分的邮票,用这些邮票中的一张或若干张可以得到多少种不同的邮资
#include<stdio.h>
int main()
{
	int i,j,n,k=0;
	for(n=0;n<=27;n++)
		for(i=0;i<=4;i++)
			for(j=0;j<=3;j++)
				if(i*3+j*5==n)
					k++;
				printf("%d\n",k-1);
				return 0;
}
