/*6��
  ��д������ʹ�ַ�����β����*�Ų��ö���n����������n������ɾ�����ڵ�*�ţ������ڻ����n����ʲôҲ������
  ���磺�ַ�������Ϊ*******AS*BHH**G*******,��nֵΪ4��ɾ�����ַ�������Ӧ��Ϊ��******* AS*BHH**G ****����nֵΪ9����Ϊ*******AS*BHH**G*******
  */
#include <stdio.h>
 void fun(char *a,int n)
{
	int i=0,j;
	char *t,*f;
	t=f=a;
	while(*t)t++;
	t--;
	while(*t=='*')
	{
		t--;
		i++;
	}
	t++;
	a=t;
	if(n<=i)
	{
		for(j=0,f=t;j<n;j++,f++)
			*(a++)=*f;
	}
	else
		for(f=t;*f!='\0';f++)
			*(a++)=*f;
	*a='\0';

}
void main()
{
	char s[81];
	int n;
	printf("Enter a string:\n");
	gets(s);
	printf("\nenter n:");
	scanf("%d",&n);
	fun(s,n);
	printf("the string after deleted:\n");
	puts(s);
	printf("\n");	
}