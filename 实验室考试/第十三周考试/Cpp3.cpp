/*3.自守数是指一个数的平方的尾数等于该数本身的自然数，
如25的平方等于625； 76的平方等于5776； 9376的平方等于87909376；
编程求10000以内的所有自然数。
*/
#include<stdio.h>
void main()
{
	int i,a,s,b,n,flag=0,c;
	scanf("%d",&n);
	printf("结果是:\n");
	for(i=0;i<n;i++)
	{
		s=i*i;
		c=i;
		flag=0;
		while(i>0)
		{
			a=s%10;
			b=i%10;
			s=s/10;
			i=i/10;
			if(a!=b)
				flag=1;
		}
		i=c;
		if(flag==0)
			printf("%d ",i);
	}
	printf("\n");
}
