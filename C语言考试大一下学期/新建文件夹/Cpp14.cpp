/*14����д��������ss��ָ�ַ����������±�Ϊż��λ���ϵ���ĸת��Ϊ��д������λ���ϲ�����ĸ����ת������
�������ݣ�I love my motherland!
������ݣ�I LoVe mY MoThErLaNd!*/
#include <stdio.h>
#include <string.h>
#define MAX 100
void fun(char *ss)
{
	for(;*ss!='\0';ss=ss+2)
		if(*ss>='a'&&*ss<='z')
			*ss=*ss-32;
}
void main()
{
	char tt[51];
	gets(tt); 
	fun(tt);
	printf("%s\n",tt);
}
/*14����д��������ss��ָ�ַ����������±�Ϊż��λ���ϵ���ĸת��Ϊ��д������λ���ϲ�����ĸ����ת������
�������ݣ�I love my motherland!
������ݣ�I LoVe mY MoThErLaNd!

#include <stdio.h>
#include <string.h>
#define MAX 100
void fun(char *ss)
{
	char *t;
	t=ss;
	while (*t)
	{if ((*t>='a')&&(*t<='z')) *t=*t-32;
	t=t+2;}    
}
int main()
{
	char tt[51];
	gets(tt); 
	fun(tt);
	printf("%s\n",tt);
	return 0;
}*/