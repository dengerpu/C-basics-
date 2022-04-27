/*12、编程：完成fun函数，实现将s所指字符串中的所有数字字符移到所有非数字字符之后，并保持数字字符和非数字字符串原有的先后次序。
输入数据：def35adh3kjsdf7
输出数据：defadhkjsdf3537
*/
#include <stdio.h>
void fun(char s[])
{
	int a[100],b[100],i,j=0,k=0;
	for(i=0;s[i]!='\0';i++)
		if(s[i]>='0'&&s[i]<='9')
			b[k++]=s[i];
		else
			a[j++]=s[i];
		a[j]='\0';b[k]='\0';
		for(i=0;a[i]!='\0';i++)
			s[i]=a[i];
		for(j=0;b[j]!='\0';j++)
			s[i++]=b[j];
		s[i]='\0';
}
int main()
{
    char s[80]; 
	gets(s); 
	fun(s);
	printf("%s\n",s);
	return 0;
}