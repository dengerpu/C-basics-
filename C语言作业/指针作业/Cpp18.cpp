/*18��
��д������ͳ��һ���ַ����е��ʵĸ�������Ϊ����ֵ���ء�һ���ַ����������������룬�涨���е�����Сд��ĸ��ɣ�����֮�������ɸ��ո������һ�еĿ�ʼû�пո�
*/
#include <stdio.h>
#include <string.h>
#define N 80
int fun(char *s)
{
	int count=0;
	for(;*s!='\0';s++)
		if(*s==' ')
			count++;
		return count+1;
}
void main()
{
	char line[N];int num=0;
	printf("enter a string :\n");
	gets(line);
	num=fun(line);
	printf("the number of word is :%d\n\n",num);
	
}