/*17��
��д������ͳ��tt��ָ�ַ�����'a'��'z'��26��Сд��ĸ���Գ��ֵĴ����������˷���pp��ָ�����С�
���磺������abcdefgabcdeabc�󣬳����������Ӧ��Ϊ��
3 3 3 2 2 1 1 0 0 0 0 0 0 0 0 0 0 0  0
*/
#include <stdio.h>
void fun(char *tt,int pp[])
{
	int i;
	for(i=0;i<26;i++)
		pp[i]=0;
	for(;*tt!='\0';tt++)
	{
		for(i=97;i<=122;i++)
			if(*tt==i)
				pp[i-97]++;
	}
}
void main()
{
	char aa[1000];
	int bb[26],k;
	printf("\nplease enter a char string:");
	scanf("%s",aa);
	fun(aa,bb);
	for(k=0;k<26;k++)
		printf("%d ",bb[k]);
	printf("\n");	
}