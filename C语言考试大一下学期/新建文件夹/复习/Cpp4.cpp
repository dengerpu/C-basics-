/*4、编写函数，统计任意一个密码电文中英文字母出现了多少次。
输入数据：abc12345689def9876ghi981jk8
输出数据：英文字母出现的次数为:11
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
    printf("英文字母出现的次数为:");
	printf("%d",count(ss));
	printf("\n");
	return 0;
}