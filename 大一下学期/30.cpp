//30. 将字符串中下标位置为奇数的字符按照ascII从小到大排序输出。（不允许修改main函数）
#include <stdio.h>
#include<string.h>
void fun(char s[],char p[])
{
	//
	int i,j;
	char t;
	for(i=1;i<strlen(s)-1;i=i+2)
		for(j=i+2;j<strlen(s);j=j+2)
			if(s[i]>s[j])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
			j=0;
			for(i=1;i<strlen(s);i=i+2)
			{
				p[j]=s[i];
				j++;
			}
			p[j]='\0';
			//
			
}
int main()
{
	char s[80]="baawrskjghzlicda",p[80];	
	printf("\nthe origianl string is:%s\n",s);
	fun(s,p);
	printf("\nthe result is :%s\n",p);
	return 0;
}