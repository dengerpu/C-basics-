/*14����д��������ss��ָ�ַ����������±�Ϊż��λ���ϵ���ĸת��Ϊ��д������λ���ϲ�����ĸ����ת������
�������ݣ�I love my motherland!
������ݣ�I LoVe mY MoThErLaNd!
*/
#include <stdio.h>
#include <string.h>
#define MAX 100
void fun(char *ss)
{
	int i=0;
	for(i=0;ss[i]!='\0';i+=2)
		if(ss[i]>='a'&&ss[i]<='z')
			ss[i]-=32;
}
int main()
{
	char tt[51];
	gets(tt); 
	fun(tt);
	printf("%s\n",tt);
	return 0;
}