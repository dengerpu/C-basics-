/*3����д������ͳ������һ���ַ������ĸ������ַ�����Ƶ����ߡ�
�������ݣ�abc12345689def9876ghi981jk8
������ݣ�����Ƶ����ߵ������ַ���:8
*/
#include <stdio.h>
#include <string.h>
char count(char *st)
{
	int a[100]={0},i,max=0;
	char ch;
 for(;*st!='\0';st++)
	{
	 if(*st>='0'&&*st<='9')
	 {
		 for(i=48;i<=57;i++)
			 if(i==*st)
				 a[i]++;
	 }
 }
 for(i=48;i<=57;i++)
	 if(a[i]>max)
	 {
	 max=a[i];
	 ch=i;
	 }
	 return ch;

}
int main()
{
 char ss[80],ch; 
 gets(ss);
 ch=count(ss);
    printf("����Ƶ����ߵ������ַ���:");
 printf("%c\n",ch); 
 return 0;
}