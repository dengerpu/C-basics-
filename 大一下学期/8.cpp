/*8. 将s所指字符串中的所有数字字符移到所有非数字字符之后，并保持数字字符和非数字字符串原有的先后次序。（不允许修改main函数）
例如：def35adh3kjsdf7,执行结果为defadhkjsdf3537.*/
#include <stdio.h>
#include<string.h>
void fun(char s[])
{
	int i,j;
	char t;
	for(i=0;i<strlen(s)-1;i++)
		for(j=i+1;j<strlen(s);j++)
			if(s[i]>='0'&&s[i]<='9')
			{
				if(s[j]<'0'||s[j]>'9')
				{
					t=s[i];
					s[i]=s[j];
					s[j]=t;
				}
			}
}
int main()
{
    char s[80]="def35adh3kjsdf7";
	printf("\nthe original string is:%s\n",s);
	fun(s);
	printf("\nthe result is :%s\n",s);
	return 0;
}