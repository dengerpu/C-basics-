19. /*
��д����������β����*��ǰ��*�⣬���ַ����е�����*��ȫ��ɾ�����β�p�Ѿ�ָ���ַ���������һ����ĸ������ʹ��c�����ṩ���ַ���������ǰ����β����*�Ų�ɾ��.
���磺�ַ�������Ϊ*******AS*BHH**G*******,ɾ�����ַ�������Ӧ��Ϊ��*******ASBHHG*******
*/
#include <stdio.h>
void fun(char *a,char *h,char *p)
{
	


}
void main()
{
	char s[81],*t,*f;
	printf("Enter a string:\n");
	gets(s);
	t=f=s;
	while (*t) t++;
	t--;
	while (*t=='*') t--;
	while (*f=='*') f++;
	fun(s,f,t);
	printf("the string after deleted:\n");
	puts(s);
	printf("\n");	
}