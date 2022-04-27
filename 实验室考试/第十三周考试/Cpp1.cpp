/*1.	解决问题：DNA序列的编码。
对于DNA序列（序列中包含A、C、G和T四种字符），我们使用如下方法为它编码:
输入一个DNA序列，输出它的编码。
例如，输入AACAATGGGG
对应编码为：2AC2AT4G
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int m=0;
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		int k=1;
		for(int j=i;j<strlen(a);j++)
			if(a[i]==a[j+1])
				k++;
			else
				break;
			if(k>1)
            {
				b[m++]=k+48;
				b[m++]=a[i];
			}
			else
				b[m++]=a[i];
			i=j;
	}
	b[m]='\0';
	printf("对应编码为:\n");
	puts(b);
	printf("\n");
	return 0;
}