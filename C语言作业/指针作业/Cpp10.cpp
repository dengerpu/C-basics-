/*10��
��д����������β����*�⣬���ַ����е�����*��ȫ��ɾ�����β�p�Ѿ�ָ���ַ���������һ����ĸ������ʹ��c�����ṩ���ַ����������м��β����*�Ų�ɾ��.
���磺�ַ�������Ϊ*******AS*BHH**G*******,ɾ�����ַ�������Ӧ��Ϊ��ASBHHG*******
*/
#include <stdio.h>
void fun(char *a,char *p)
{
	char *f;
	f=a;
	while(*f=='*')f++;
	for(;f<p;f++)
		if(*f!='*')
			*(a++)=*f;
		for(;*f!='\0';f++)
			*(a++)=*f;	
		*a='\0';
}
void main()
{
	char s[81],*t;
	printf("Enter a string:\n");
	gets(s);
	t=s;
	while (*t) t++;
	t--;
	while (*t=='*') t--;
	fun(s,t);
	printf("the string after deleted:\n");
	puts(s);
	printf("\n");	
}