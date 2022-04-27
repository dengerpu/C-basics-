#include<stdio.h>
int main()
{
	int a,b,i=0,j;
	char s[100];
	scanf("%d%d",&a,&b);
	while(a!=0)
	{
		s[i]=a%b;
		i++;
		a=a/b;
	}
	for(j=i-1;j>=0;j--)
		if(s[j]>9)
			printf("%c",10-s[j]+65);
		else
		printf("%d",s[j]);
	printf("\n");
	return 0;
}