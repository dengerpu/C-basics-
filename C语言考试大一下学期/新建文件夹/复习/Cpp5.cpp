/*5、完成crypt函数，实现加密并输出功能。
加密规则：字符串中所有小写英文字母循环加密。如a到b，b到c，…,z到a。
输入数据：zy have a little apple!
输出数据：the resulted data is :az ibwf b mjuumf bqqmf!
*/
#include <stdio.h>
#include <string.h>
void crypt(char *s)
{
	for(;*s!='\0';s++)
		if(*s>='a'&&*s<'z')
			(*s)++;
		else
			if(*s=='z')
				*s='a';
}
int main()
{
	char t1[80];
	gets(t1);
	crypt(t1);
	printf("\nthe resulted data is :%s",t1);
	printf("\n");
	return 0;
}