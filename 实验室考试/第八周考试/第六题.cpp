#include<stdio.h>
int main()
{
	int a,b,i,j,k=0,x,y,z,t,c;
	scanf("%d%d",&a,&b);  //a���Լ��  b��С������    a*b==i*j
	for(i=2;i<=b;i++)
		for(j=2;j<=b;j++)
			if(i%a==0&&j%a==0&&(i*j==a*b)&&i!=j)   //��������Ϊ��֤
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