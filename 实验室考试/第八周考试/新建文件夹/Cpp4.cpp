#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],s1[100],s2[100];
	int i,j,n,m=0,max=0,x,y,t[100];
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		s2[i]=s[i];
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		{
			t[m]=i;
		if(s[i]>='a'&&s[i]<='z')
			s[i]=s[i]-32;
		s1[m++]=s[i];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i&&i+j<m;j++)
		{
			if(s1[i-j]!=s1[i+j])
				break;    //字符串为奇数的情况下
			if(2*j+1>max)
			{
				max=2*j+1;
				x=t[i-j];
				y=t[i+j];
			}
		}
		for(j=0;j<=i&&i+j<m;j++)
		{
			if(s1[i-j]!=s1[i+j+1])
				break;
			if(2*j+2>max)
			{
				max=2*j+2;
				x=t[i-j];
				y=t[i+j+1];
			}
		}
	}
	for(i=x;i<=y;i++)
		printf("%c",s2[i]);
	printf("\n");
		return 0;
}