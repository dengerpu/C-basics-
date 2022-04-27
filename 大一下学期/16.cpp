/*16. w是一个大于10的无符号整数，若w是n(n>=2)位的整数，函数求出w的低n-1位的数作为函数值返回。（不允许修改main函数）
如输入790404，输出为90404。*/
#include <stdio.h>
#include<math.h>
unsigned fun(unsigned w)
{
	//
	int a,i,l=0,b=w,sum=0;
	while(b!=0)
	{
		l++;
		b=b/10;
	}
	for(i=0;i<l-1;i++)
	{
		a=w%10;
		sum=sum+pow(10,i)*a;
		w=w/10;
	}
	return sum;
	//
}
int main()
{
	unsigned x;
	printf("enter a unsigned integer number:");
	scanf("%u",&x);
	printf("the original data is :%d\n",x);
	if (x<10) printf("data error!");
	else
		printf("the result :%u\n",fun(x));
	printf("\n");
	return 0;
}