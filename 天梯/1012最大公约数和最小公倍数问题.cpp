#include<stdio.h>
int main()
{
	int a,b,z,i,j,k=0;
	scanf("%d%d",&a,&b);  //a最大公约数  b最小公倍数    a*b==i*j
	for(i=2;i<=b;i++)
		for(j=2;j<=b;j++)
			if(i%a==0&&j%a==0&&(i*j==a*b)&&i!=j)
			{
				if((i/a)/(j/a)!=1||(j/a)/(i/a)!=1)
				{
					printf("%d %d\n",i,j);
				k++;
				}
			}
			printf("%d\n",k);
			
			return 0;
}