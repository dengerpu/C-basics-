//3��w��һ������10���޷�����������w��n(n>=3)λ��������������w���м�������ԭʼ����Ϊ45632ȡֵΪ632����ȥ�����λ�����λ���������
#include<stdio.h>
#include<math.h>
int f(int w)
{
	int a,i=0,s=0;
	w=w/10;
	while(w/10!=0)
	{
		a=w%10;
		s+=a*pow(10,i);
		w=w/10;
		i++;
	}
	return s;
}
int main()
{
	int w;
	scanf("%d",&w);
	printf("%d\n",f(w));
	return 0;
}