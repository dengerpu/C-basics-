#include<stdio.h>
int main()
{
int n,s1=0,i,j,s2=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	s1+=i;
if(s1>=n)
break;
}
printf("%d\n",s1);
for(j=1;j<=i-2;j++)
s2+=i;
printf("%d\n",s2);
if(i%n==0)
printf("%d/%d\n",s1-s2,i-s1+s2);
else
printf("%d/%d\n",i-s1+s2,s1-s2);
return 0;
}