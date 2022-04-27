/*12、编程：完成fun函数，实现将s所指字符串中的所有数字字符移到所有非数字字符之后，并保持数字字符和非数字字符串原有的先后次序。
输入数据：def35adh3kjsdf7
输出数据：defadhkjsdf3537
*/
#include <stdio.h>
void fun(char s[])
{
	char a[100],b[100];
	int i,j=0,k=0;
	for(i=0;s[i]!='\0';i++)
		if(s[i]>='0'&&s[i]<='9')
		{
			b[k]=s[i];
			k++;
		}
		else
		{a[j]=s[i];j++;}
		b[k]='\0';
		a[j]='\0';
		i=0;k=0,j=0;
		while(a[i]!='\0')
		{
			s[k]=a[i];
			k++;
			i++;
		}
		while(b[j]!='\0')
		{
			s[k]=b[j];
			k++;
			j++;
		}
		
};
int main()
{
    char s[80]; 
	gets(s); 
	fun(s);
	printf("%s\n",s);
	return 0;
}