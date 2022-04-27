/*2、编写程序：完成connect_string函数，实现字符串的连接功能。
输入数据：
 I am a Chinese, 
输出数据：
    I am a Chinese,I love my motherland!*/
#include<stdio.h>
int main()
{
 char a[100],b[100]="I love my motherland!";
 void connect_string(char *,char *);
 gets(a); 
    connect_string(a,b);     
 puts(a);
 return 0;
}
 void connect_string(char *p,char *q)
 {  
  while(*p!='\0')
	  p++;
  while(*q!='\0')
	  *(p++)=*(q++);
  *p='\0';
 }