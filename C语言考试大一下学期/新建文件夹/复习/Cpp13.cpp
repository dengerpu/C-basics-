/*13、
编程：完成fun函数，除了尾部的*和前导*外，将字符串中的其余*号全部删除，形参p已经指向字符串中最后的一个字母，不得使用c语言提供的字符串函数。前导和尾部的*号不删除.
输入数据：*******AS*BHH**G*******
输出数据：*******ASBHHG*******
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