/*14. ��дһ����������һ���ַ����еķ�ԭ����ĸ��ֵ����һ���ַ����У�����main�����е��ô˺������������ݺ�������������������ʵ�֡����������޸�main������*/
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