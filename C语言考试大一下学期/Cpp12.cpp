/*12、编程：完成fun函数，实现将s所指字符串中的所有数字字符移到所有非数字字符之后，并保持数字字符和非数字字符串原有的先后次序。
输入数据：def35adh3kjsdf7
输出数据：defadhkjsdf3537
*/
#include <stdio.h>
void fun(char s[])
{
	int i,j=0,k=0;
	char a[80],b[80];
	for(i=0;s[i]!='\0';i++)
		if(s[i]>='0'&&s[i]<='9')
			a[j++]=s[i];
		else
			b[k++]=s[i];
		a[j]='\0';b[k]='\0';
		j=0;
		for(i=0;b[i]!='\0';i++)
			s[j++]=b[i];
		for(i=0;a[i]!='\0';i++)
			s[j++]=a[i];
		s[j]='\0';
}
int main()
{
    char s[80]; 
	gets(s); 
	fun(s);
	printf("%s\n",s);
	return 0;
}