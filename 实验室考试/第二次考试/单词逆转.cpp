#include<stdio.h>
int main()
{
	char a[100][100];
	int t=0,i;
	while(scanf("%s",a[t])&&getchar()==' ')
	{
		t++;
	}
	for(i=t;i>=0;i--)
		printf("%s ",a[i]);
	return 0;
}