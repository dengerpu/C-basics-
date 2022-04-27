/*14. 编写一个函数，将一个字符串中的非原音字母赋值到另一个字符串中，并在main函数中调用此函数，输入数据和最后输出都在主函数中实现。（不允许修改main函数）*/
#include<stdio.h>
void fun(char a[],char b[])
{
	//
	int i=0,j=0;
	while(a[i]!='\0')
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
			
		{
			b[j]=a[i];
			j++;
		}
		i++;
	}
	b[j]='\0';	
	//
}
int main()
{  
	char a[80],b[80]={0};
	gets(a);
	fun(a,b);
	puts(b);
	return 0;
}