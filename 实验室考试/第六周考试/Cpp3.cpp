//输入10个整数 输出第一个奇数和第二个奇数的下标并把两个奇数之间的数求和并输出。
#include<stdio.h>
int main()
{
	int a[10],i,l=0,sum=0,b[2],k=0;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]%2!=0)
		{
			l++;
			printf("第%d个奇数的下标为%d:",l,i);
			b[k]=i;
			k++;
		}
		if(l==2)
			break;
	}
	for(i=b[0]+1;i<b[1];i++)
		sum+=a[i];
	printf("前两个奇数之间的数和为:%d",sum);
	return 0;
}
