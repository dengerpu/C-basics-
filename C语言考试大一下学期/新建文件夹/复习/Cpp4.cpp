/*4����д������ͳ������һ�����������Ӣ����ĸ�����˶��ٴΡ�
�������ݣ�abc12345689def9876ghi981jk8
������ݣ�Ӣ����ĸ���ֵĴ���Ϊ:11
*/
#include <stdio.h>
#include <string.h>
int count(char *s)
{
	int i=0;
	for(;*s!='\0';s++)
		if(*s>='a'&&*s<='z'||*s>='A'&&*s<='Z')
			i++;
		return i;

}
int main()
{
	char ss[80]; 
	gets(ss); 
    printf("Ӣ����ĸ���ֵĴ���Ϊ:");
	printf("%d",count(ss));
	printf("\n");
	return 0;
}