/*3.��������ָһ������ƽ����β�����ڸ����������Ȼ����
��25��ƽ������625�� 76��ƽ������5776�� 9376��ƽ������87909376��
�����10000���ڵ�������Ȼ����
*/
#include<stdio.h>
void main()
{
	int i,a,s,b,n,flag=0,c;
	scanf("%d",&n);
	printf("�����:\n");
	for(i=0;i<n;i++)
	{
		s=i*i;
		c=i;
		flag=0;
		while(i>0)
		{
			a=s%10;
			b=i%10;
			s=s/10;
			i=i/10;
			if(a!=b)
				flag=1;
		}
		i=c;
		if(flag==0)
			printf("%d ",i);
	}
	printf("\n");
}
