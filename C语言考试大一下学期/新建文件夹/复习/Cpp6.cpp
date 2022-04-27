/*6、编写程序：完成fun函数，实现将任意一个字符串中的原音字母抽取出来组成一个新的字符串并输出。
输入数据：I am a teacher,I am 39 years old.
输出数据：IaaeaeIaeao
*/
#include<stdio.h>
void fun(char a[],char b[])
{
	int i,j=0;
	for(i=0;a[i]!='\0';i++)
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
			b[j++]=a[i];
		b[j]='\0';	
}
int main()
{   
	char a[80],b[80]={0};
	gets(a);
	fun(a,b);
	puts(b);
	return 0;
}