/*12����̣����fun������ʵ�ֽ�s��ָ�ַ����е����������ַ��Ƶ����з������ַ�֮�󣬲����������ַ��ͷ������ַ���ԭ�е��Ⱥ����
�������ݣ�def35adh3kjsdf7
������ݣ�defadhkjsdf3537
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