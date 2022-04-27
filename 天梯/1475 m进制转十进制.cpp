#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int b,sum=0,i=0,j=0,c;
	char a[100];
	scanf("%s",&a);
	scanf("%d",&b);
	for(j=strlen(a)-1;j>=0;j--)
	{
		if(a[j]>='0'&&a[j]<='9')
			c=a[j]-'0';
		else if(a[j]>='A'&&a[j]<='F')
			c=a[j]-'A'+10;
		sum+=pow(b,i)*c;
		i++;
	}
	printf("%d\n",sum);
	return 0;
}