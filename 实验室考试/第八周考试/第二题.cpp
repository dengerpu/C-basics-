#include<stdio.h>
#include<string.h>
void fun(char *a,char *h,char *p)
{
	a=h;
	for(h;h<p;h++)
		if(*h!='*')*(a++)=*h;
		for(;*h!='\0';h++)
			*(a++)=*h;
		*a='\0';
}
void main()
{
	char s[100],*t,*f;
	printf("������\n");
	gets(s);
	t=f=s;
	while(*t)
		t++;
	t--;
	while(*t=='*')t--;   //ɾ�������******
	while(*f=='*')f++;    //ɾ��ǰ���******
	fun(s,f,t);
	puts(s);
}