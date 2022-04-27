#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	int sum=0,b,c,s=0,d[100],j=0;
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		c=a[i]-48;
		sum=sum*10+c;
	}
	while(sum>0)
	{
		b=sum%8;
		d[j]=b;
		j++;
		sum=sum/10;
	}
	for(i=j-1;i>=0;i--)
		printf("%d",d[i]);
	printf("\n");
}