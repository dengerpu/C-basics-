/*5�����crypt������ʵ�ּ��ܲ�������ܡ�
���ܹ����ַ���������СдӢ����ĸѭ�����ܡ���a��b��b��c����,z��a��
�������ݣ�zy have a little apple!
������ݣ�the resulted data is :az ibwf b mjuumf bqqmf!
*/
#include <stdio.h>
#include <string.h>
void crypt(char *s)
{
	for(;*s!='\0';s++)
		if(*s>='a'&&*s<'z')
			(*s)++;
		else
			if(*s=='z')
				*s='a';
}
int main()
{
	char t1[80];
	gets(t1);
	crypt(t1);
	printf("\nthe resulted data is :%s",t1);
	printf("\n");
	return 0;
}