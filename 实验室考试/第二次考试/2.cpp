/*�ڶ���
��Ŀ���� Description
����һ��Ӣ����ӣ�ϣ����Ѿ�����ĵ���˳�򶼷�ת����
�������� Input Description
�������һ��Ӣ����ӡ�
������� Output Description
�����ʵ�˳��ѵ��ʵ������
�������� Sample Input
I love you
������� Sample Output
you love I
*/
#include<stdio.h>
int main()
{
	char a[100],b[10][10];
	int i=0,j=0,k=0;
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]!=' ')
		{
			b[j][k]=a[i];
			k++;
		}
		else
		{
			b[j][k]='\0';
			j++;
			k=0;
		}
		i++;
	}
	b[j][k]='\0';
	for(i=j;i>=0;i--)
		printf("%s ",b[i]);
	return 0;
}