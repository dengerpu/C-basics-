/*11��
��д���������ַ����е�ǰ��*��ȫ��ɾ�����м��β����*�Ų�ɾ��.
���磺�ַ�������Ϊ*******AS*BHH**G*******,ɾ�����ַ�������Ӧ��Ϊ��AS*BHH**G*******
*/
#include <stdio.h>
void fun(char *a)
{
	char *f;
	f=a;
	while(*f=='*')
		f++;	
	for(;*f!='\0';f++)
		*(a++)=*f;
	*a='\0';
}
void main()
{
	char s[81];
	printf("Enter a string:\n");
	gets(s);
	fun(s);
	printf("the string after deleted:\n");
	puts(s);
	printf("\n");	
}