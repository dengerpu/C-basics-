//����10������ �����һ�������͵ڶ����������±겢����������֮�������Ͳ������
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
			printf("��%d���������±�Ϊ%d:",l,i);
			b[k]=i;
			k++;
		}
		if(l==2)
			break;
	}
	for(i=b[0]+1;i<b[1];i++)
		sum+=a[i];
	printf("ǰ��������֮�������Ϊ:%d",sum);
	return 0;
}
