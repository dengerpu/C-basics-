/*20��
��д��������ss��ָ�ַ����������±�Ϊ����λ���ϵ���ĸת��Ϊ��д������λ���ϲ�����ĸ����ת������
*/
#include <stdio.h>
#include <string.h>
#define MAX 100
void fun(char *ss)    //�±��Ǵ�0��ʼ������������
{
	ss++;
	for(;*ss!='\0';ss=ss+2)
		if(*ss>='a'&&*ss<='z')
			*ss=*ss-32;
		*ss='\0';
}
void main()
{
	char tt[51];
	printf("input a string within 50 characters:\n");
	gets(tt);
	printf("\n\nafter changing,the string\n  \"%s\"",tt);
	fun(tt);
	printf("\nbecomes\n  \"%s\"",tt);
	printf("\n");	
}