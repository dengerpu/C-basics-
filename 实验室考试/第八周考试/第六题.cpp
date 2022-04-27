#include<stdio.h>
int main()
{
	int a,b,i,j,k=0,x,y,z,t,c;
	scanf("%d%d",&a,&b);  //a最大公约数  b最小公倍数    a*b==i*j
	for(i=2;i<=b;i++)
		for(j=2;j<=b;j++)
			if(i%a==0&&j%a==0&&(i*j==a*b)&&i!=j)   //以下内容为验证
			{
				x=i,y=j;
				if(y>x)
				{
					t=y;
					y=x;
					x=t;
				}
				while(y!=0)
				{
					z=x%y;
					x=y;
					y=z;
				}
				if(x==a)
					k++;
				
			}
			printf("%d\n",k);
			
			return 0;
}