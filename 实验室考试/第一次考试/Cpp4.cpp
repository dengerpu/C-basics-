/*��Ŀ����?Description
�ִ���ѧ������֤��֮һ��Georg Cantor֤�����������ǿ�ö�ٵġ�������������һ�ű���֤����һ����ģ� 1/1 1/2 1/3 1/4 1/5 �� 2/1 2/2 2/3 2/4 �� 3/1 3/2 3/3 �� 4/1 4/2 �� 5/1 �� �� ������Z���θ��ϱ��ÿһ���š���һ����1/1��Ȼ����1/2��2/1��3/1��2/2����

  ��������?Input Description
  ����N��1��N��10000000��
  �������?Output Description
  ���еĵ�N��
  ��������?Sample Input
  7
  �������?Sample Output
  1/4
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	int a[10000000],b=0,c[10000000],d[10000000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(i%2!=0)
		{
			for(j=i,k=1;j>=1,k<=i;j--,k++)
			{
				c[b]=j;
				d[b]=k;
				b++;
			}
			//	printf("%d/%d ",j,k);
		}
		else
		{
			for(j=1,k=i;j<=i,k>=1;j++,k--)
			{
				c[b]=j;
				d[b]=k;
				b++;
			}
			//printf("%d/%d ",j,k);
		}
				printf("%d/%d\n",c[n-1],d[n-1]);
			return 0;
}