/*1.	������⣺DNA���еı��롣
����DNA���У������а���A��C��G��T�����ַ���������ʹ�����·���Ϊ������:
����һ��DNA���У�������ı��롣
���磬����AACAATGGGG
��Ӧ����Ϊ��2AC2AT4G
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int m=0;
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		int k=1;
		for(int j=i;j<strlen(a);j++)
			if(a[i]==a[j+1])
				k++;
			else
				break;
			if(k>1)
            {
				b[m++]=k+48;
				b[m++]=a[i];
			}
			else
				b[m++]=a[i];
			i=j;
	}
	b[m]='\0';
	printf("��Ӧ����Ϊ:\n");
	puts(b);
	printf("\n");
	return 0;
}