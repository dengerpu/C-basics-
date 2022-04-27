/*17．完成decrypt函数，实现解密功能：将任意密文实现解密输出。（不允许修改main函数）
加密规则：字符串中所有小写英文字母循环加密。如a到b，b到c，…,z到a。（不允许修改main函数）
如输入az ibwf  b mjuumf  bqqmf!，输出为：zy have a little apple!*/
#include <stdio.h>
#include <string.h>
void decrypt(char *s)
{
	//
	int i;
	for(i=0;i<strlen(s);i++)
	{
		if(*(s+i)=='a')
			*(s+i)='z';
		else
			if(*(s+i)>'a'&&*(s+i)<='z')
				*(s+i)=*(s+i)-1;
	}
	//
}
int main()
{
	char t1[80],ch;
	gets(t1);
	printf("\nthe original data is :%s",t1);
	decrypt(t1);
	printf("\nthe resulted data is :%s",t1);
	printf("\n");
	return 0;
}