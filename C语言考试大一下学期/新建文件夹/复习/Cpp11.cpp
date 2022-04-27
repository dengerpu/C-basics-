/*11、编写函数，将字符串中下标为偶数的字符按ASCII码升序排列，并将排序后下标为偶数的字符在主函数中输出。
输入数据：baawrskjghzlicda
输出数据：the result data is :abdgikrz
*/
#include <stdio.h>
void fun(char st[],char tt[])
{
	int i,j=0,k;
	char t;
	for(i=0;st[i]!='\0';i+=2)
		tt[j++]=st[i];
	tt[j]='\0';
	for(i=0;i<j-1;i++)
		for(k=i+1;k<j;k++)
			if(tt[i]>tt[k])
			{
				t=tt[i];
				tt[i]=tt[k];
				tt[k]=t;
			}
}
int main()
{
	char st[80],tt[80]; 
	gets(st);
	fun(st,tt);
	printf("the result data is :");
	puts(tt);
	return 0;
}