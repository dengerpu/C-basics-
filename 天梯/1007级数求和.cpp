/*��֪��Sn= 1��1��2��1��3������1��n����Ȼ��������һ������K����n�㹻���ʱ��Sn����K��
�����ָ���һ������K��1<=k<=15����Ҫ������һ����С��n��ʹ��Sn��K��*/
#include<stdio.h>
int main()
{
	int i,k,n;
	scanf("%d",&k);
	double sum=0;
	for(i=1;;i++)
	{
		sum+=1.0/i;
		n=i;
		if(sum>k)
			break;
	}
	printf("%d\n",i);
	return 0;
}