/*6、
  编写函数，使字符串中尾部的*号不得多于n个；若多于n个，则删除多于的*号；若少于或等于n个，什么也不做。
  例如：字符串内容为*******AS*BHH**G*******,若n值为4，删除后，字符串内容应该为：******* AS*BHH**G ****，若n值为9，则为*******AS*BHH**G*******
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