//��д����������β����*��ǰ��*�⣬���ַ����е�����*��ȫ��ɾ�����β�p�Ѿ�ָ���ַ���������һ����ĸ������ʹ��c�����ṩ���ַ���������ǰ����β����*�Ų�ɾ��.
//���磺�ַ�������Ϊ*******AS*BHH**G*******,ɾ�����ַ�������Ӧ��Ϊ��*******ASBHHG*******
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],a[100],b[100],c[100],d[100];
	int i,j=0,k=0,x=0,y=0;
	gets(s);
	for(i=0;i<strlen(s);i++)
		if(s[i]>='A'&&s[i]<='Z')
			break;
		else
		{
			a[j]=s[i];
			j++;
		}
		for(i=strlen(s)-1;i>0;i--)
			if(s[i]>='A'&&s[i]<='Z')
				break;
			else
			{
				b[k]=s[i];
				k++;
			}
			for(i=j;i<strlen(s)-k;i++)
			{
				c[x]=s[i];
				x++;
			}
			for(i=0;i<strlen(c);i++)
			{
				while(c[i]!='*')
				{
					d[x]=c[i];
					x++;
				}
			}
				d[x]='\0';
				printf("%s\n",c);
				

				return 0;
}
