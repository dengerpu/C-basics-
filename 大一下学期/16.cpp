/*16. w��һ������10���޷�����������w��n(n>=2)λ���������������w�ĵ�n-1λ������Ϊ����ֵ���ء����������޸�main������
������790404�����Ϊ90404��*/
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