//ĳ��������3�ֵ���Ʊ������5�ֵ���Ʊ,����Щ��Ʊ�е�һ�Ż������ſ��Եõ������ֲ�ͬ������
#include<stdio.h>
int main()
{
	int i,j,n,k=0;
	for(n=0;n<=27;n++)
		for(i=0;i<=4;i++)
			for(j=0;j<=3;j++)
				if(i*3+j*5==n)
					k++;
				printf("%d\n",k-1);
				return 0;
}
