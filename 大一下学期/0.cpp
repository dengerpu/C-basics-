//编写函数，除了尾部的*和前导*外，将字符串中的其余*号全部删除，形参p已经指向字符串中最后的一个字母，不得使用c语言提供的字符串函数。前导和尾部的*号不删除.
//例如：字符串内容为*******AS*BHH**G*******,删除后，字符串内容应该为：*******ASBHHG*******
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],a[100],b[100],c[100],d[100];
	int i,j=0,k=0,x=0,y=0;
	gets(s);
	for(i=0;i<strlen(s);i++)
		if(s[i]>='A'&&s[i]<='Z')
			break;
		else
		{
			a[j]=s[i];
			j++;
		}
		for(i=strlen(s)-1;i>0;i--)
			if(s[i]>='A'&&s[i]<='Z')
				break;
			else
			{
				b[k]=s[i];
				k++;
			}
			for(i=j;i<strlen(s)-k;i++)
			{
				c[x]=s[i];
				x++;
			}
			for(i=0;i<strlen(c);i++)
			{
				while(c[i]!='*')
				{
					d[x]=c[i];
					x++;
				}
			}
				d[x]='\0';
				printf("%s\n",c);
				

				return 0;
}
