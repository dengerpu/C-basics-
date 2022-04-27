//输入一行字符串，实现将字符串整体左移K位的操作，把所得的结果输出
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],c[100];
	printf("请输入字符串\n");
	gets(a);
	int k,i,j,l=0;
	printf("请输入k的值\n");
	scanf("%d",&k);
	for(i=0;i<k;i++)
		b[i]=a[i];
	b[i]='\0';
	for(j=i;j<strlen(a);j++)
	{
		c[l]=a[j];
		l++;
	}
	c[l]='\0';
	printf("%s\n",strcat(c,b));
	return 0;
}