/*12����̣����fun������ʵ�ֽ�s��ָ�ַ����е����������ַ��Ƶ����з������ַ�֮�󣬲����������ַ��ͷ������ַ���ԭ�е��Ⱥ����
�������ݣ�def35adh3kjsdf7
������ݣ�defadhkjsdf3537
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