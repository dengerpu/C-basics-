/*5、	输入一个字符串，求出其中最长的回文子串。注意：判断时忽略所有标点符号和空格，且忽略大小写，
但输出应保持原样（在回文串的首部和尾部不要输出多余字符）。输入字符串长度不超过100，且占据
单独一行，如果有多个，输出起始位置最靠左的。
样例输入：Confuciuss say:Madam,I'm Adam.
样例输出：Madam,I'm Adam。
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],c[100];
	int i,t[100],j=0,l,max=0,m,n;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		c[i]=a[i];
		if(a[i]<='z'&&a[i]>='a'||a[i]>='A'&&a[i]<='Z')
		{
			if(a[i]>='a'&&a[i]<='z')
				a[i]=a[i]-32;      //全部转化为大写
			t[j]=i;
			b[j]=a[i];
			j++;
		}
	}
	b[j]='\0';
	l=j;
	for(i=0;i<l;i++)
	{
		for(j=0;i+j<l,i-j>0;j++)
		{
			if(b[i-j]!=b[i+j])   //奇数
			{
				break;	
			}
			if(max<2*j+1)
			{
				max=2*j+1;
				m=t[i-j];
				n=t[i+j];
			}
		}
	}
	for(i=0;i<l;i++)
	{
		for(j=0;i+j<l,i-j>0;j++)
		{
			if(b[i-j]!=b[i+j+1])   //偶数
			{
				break;	
			}
			if(max<2*j+2)
			{
				max=2*j+2;
				m=t[i-j];
				n=t[i+j+1];
			}
		}
	}	
	for(i=m;i<=n;i++)
		printf("%c",c[i]);
	printf("\n");
}