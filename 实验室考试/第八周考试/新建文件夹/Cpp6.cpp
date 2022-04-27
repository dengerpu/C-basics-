#include<stdio.h>
int f(int a,int b)
{
	if(a%b==0)return b;
	else
		return f(b,a%b);
}
int main()
{
	int x,y,i,j,count=0;
	scanf("%d%d",&x,&y);
	for(i=x;i<=y;i++)
		for(j=x;j<=y;j++)
			if(f(i,j)==x&&i*j/x==y)
				count++;
			printf("%d\n",count);
			return 0;
}