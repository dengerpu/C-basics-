/*
������
Ѱ���Ӵ�λ��
?ʱ������: 1 s
?�ռ�����: 128000 KB
?��Ŀ�ȼ� : ��ͭ Bronze
���
��Ŀ����?Description
�����ַ���a���ַ���b����֤b��a��һ���Ӵ����������b��a�е�һ�γ��ֵ�λ�á�
��������?Input Description
��һ�а��������ַ���a��b
�������?Output Description
��һ��һ������
��������?Sample Input
abcd bc
�������?Sample Output
2
���ݷ�Χ����ʾ?Data Size & Hint
�ַ����ĳ��Ⱦ�������100
Pascal�û���ע�⣺�����ַ���֮����ܰ�������ո�
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k=0,d;
	char a[100],b[100];
	scanf("%s%s",a,b);
	for(i=0;i<strlen(a);i++)
	{
		k=0;
		for(j=i;j<i+strlen(b);j++)
		{
			if(a[j]==b[k])
				k++;
			if(k==strlen(b)-1)
			{
				d=i+1;
				break;
			}
		}
	}
	printf("%d\n",d);
	return 0;
}