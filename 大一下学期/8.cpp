/*8. ��s��ָ�ַ����е����������ַ��Ƶ����з������ַ�֮�󣬲����������ַ��ͷ������ַ���ԭ�е��Ⱥ���򡣣��������޸�main������
���磺def35adh3kjsdf7,ִ�н��Ϊdefadhkjsdf3537.*/
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