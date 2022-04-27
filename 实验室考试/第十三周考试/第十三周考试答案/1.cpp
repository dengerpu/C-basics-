#include<stdio.h>
#include<string.h>
#define N 100
void prt(int n,char ch);
void main()
{
	char str[N],cur;
	int i,len,count;

	gets(str);
	cur=str[0];
	count=0;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]==cur)
			count++;
		else
		{
			prt(count,cur);
			cur=str[i];
			count=1;
		}
		if(i==len-1)
			prt(count,cur);
	}
	printf("\n");
}
void prt(int n,char ch)
{
	if(n!=1)
		printf("%d",n);
	putchar(ch);
}
