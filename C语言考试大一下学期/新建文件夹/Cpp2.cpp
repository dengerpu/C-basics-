/*2����д�������connect_string������ʵ���ַ��������ӹ��ܡ�
�������ݣ�
 I am a Chinese, 
������ݣ�
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