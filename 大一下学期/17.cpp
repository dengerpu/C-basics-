/*17�����decrypt������ʵ�ֽ��ܹ��ܣ�����������ʵ�ֽ�����������������޸�main������
���ܹ����ַ���������СдӢ����ĸѭ�����ܡ���a��b��b��c����,z��a�����������޸�main������
������az ibwf  b mjuumf  bqqmf!�����Ϊ��zy have a little apple!*/
#include <stdio.h>
#include <string.h>
void decrypt(char *s)
{
	//
	int i;
	for(i=0;i<strlen(s);i++)
	{
		if(*(s+i)=='a')
			*(s+i)='z';
		else
			if(*(s+i)>'a'&&*(s+i)<='z')
				*(s+i)=*(s+i)-1;
	}
	//
}
int main()
{
	char t1[80],ch;
	gets(t1);
	printf("\nthe original data is :%s",t1);
	decrypt(t1);
	printf("\nthe resulted data is :%s",t1);
	printf("\n");
	return 0;
}