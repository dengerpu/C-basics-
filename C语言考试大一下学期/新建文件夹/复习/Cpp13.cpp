/*13��
��̣����fun����������β����*��ǰ��*�⣬���ַ����е�����*��ȫ��ɾ�����β�p�Ѿ�ָ���ַ���������һ����ĸ������ʹ��c�����ṩ���ַ���������ǰ����β����*�Ų�ɾ��.
�������ݣ�*******AS*BHH**G*******
������ݣ�*******ASBHHG*******
*/
#include <stdio.h>
void fun(char *a,char *h,char *p)
{
	a=h;
	for(;*h!='\0';h++)
		if(*h!='*')
			*(a++)=*h;
		for(h=p;*h!='\0';h++)
			*(a++)=*h;
		*a='\0';
}
int main()
{
	char s[81],*t,*f; 
	gets(s);
	t=f=s;
	while (*t) t++;
	t--;
	while (*t=='*') t--;
	while (*f=='*') f++;
	fun(s,f,t); 
	puts(s);
	printf("\n"); 
	return 0;
}