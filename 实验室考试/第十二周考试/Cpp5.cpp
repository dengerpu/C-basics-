/*5��	����һ���ַ��������������Ļ����Ӵ���ע�⣺�ж�ʱ�������б����źͿո��Һ��Դ�Сд��
�����Ӧ����ԭ�����ڻ��Ĵ����ײ���β����Ҫ��������ַ����������ַ������Ȳ�����100����ռ��
����һ�У�����ж���������ʼλ�����ġ�
�������룺Confuciuss say:Madam,I'm Adam.
���������Madam,I'm Adam��
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],c[100];
	int i,t[100],j=0,l,max=0,m,n;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		c[i]=a[i];
		if(a[i]<='z'&&a[i]>='a'||a[i]>='A'&&a[i]<='Z')
		{
			if(a[i]>='a'&&a[i]<='z')
				a[i]=a[i]-32;      //ȫ��ת��Ϊ��д
			t[j]=i;
			b[j]=a[i];
			j++;
		}
	}
	b[j]='\0';
	l=j;
	for(i=0;i<l;i++)
	{
		for(j=0;i+j<l,i-j>0;j++)
		{
			if(b[i-j]!=b[i+j])   //����
			{
				break;	
			}
			if(max<2*j+1)
			{
				max=2*j+1;
				m=t[i-j];
				n=t[i+j];
			}
		}
	}
	for(i=0;i<l;i++)
	{
		for(j=0;i+j<l,i-j>0;j++)
		{
			if(b[i-j]!=b[i+j+1])   //ż��
			{
				break;	
			}
			if(max<2*j+2)
			{
				max=2*j+2;
				m=t[i-j];
				n=t[i+j+1];
			}
		}
	}	
	for(i=m;i<=n;i++)
		printf("%c",c[i]);
	printf("\n");
}