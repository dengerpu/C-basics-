#include <stdio.h>
#include <string.h>
void decrypt(char *s)
{
	int i;
	for(i=0;i<s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			if(s[i]=='a')
				s[i]='z';
			else
				s[i]=s[i]-1;
		}
	}
}
int main()
{
	char t1[80],ch;
	gets(t1);
	decrypt(t1);
	printf("\n·­ÒëºóÎª:%s",t1);
	printf("\n");
	return 0;
}
