//����һ���ַ�����ʵ�ֽ��ַ�����������Kλ�Ĳ����������õĽ�����
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],c[100];
	printf("�������ַ���\n");
	gets(a);
	int k,i,j,l=0;
	printf("������k��ֵ\n");
	scanf("%d",&k);
	for(i=0;i<k;i++)
		b[i]=a[i];
	b[i]='\0';
	for(j=i;j<strlen(a);j++)
	{
		c[l]=a[j];
		l++;
	}
	c[l]='\0';
	printf("%s\n",strcat(c,b));
	return 0;
}