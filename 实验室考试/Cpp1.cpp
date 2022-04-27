#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],s1[100],s2[100];
	int i,j,n,m=0;
	printf("«Î ‰»Î\n");
	gets(s);
	n=strlen(s);
	strcpy(s2,s);
	for(i=0;i<n;i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		{
			if((s[i]>='a'&&s[i]<='z'))
				s[i]=s[i]-32;
				
			s1[m]=s[i];
				m++;
		}
	}
	s1[m]='\0';
	puts(s1);
	puts(s2);
	
}