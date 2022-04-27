/*2、
完成match函数，实现统计源文件和目标文件内容重复率（以行为单位）
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int match(char *st1,char *st2,int *k)
{
	FILE *fp1,*fp2;
	char a[100],b[100];int i=0,l=0,j=0,m,n;
	if((fp1=fopen(st1,"r"))==NULL)
	{
		puts("cann't open file\n");
		exit(0);
	}
	if((fp2=fopen(st2,"r"))==NULL)
	{
		puts("cann't open file\n");
		exit(0);
	}
	while(!feof(fp2))
	{
		a[j]=fgetc(fp2);
		j++;
	}
	a[j]='\0';
	*k=strlen(a)-1;
	while(!feof(fp1))
	{
		b[i++]=fgetc(fp1);
	}
	b[i]='\0';
	for(m=0;m<j;m++)
		for(n=0;n<i;n++)
			if(a[m]==b[n])
				l++;
	fclose(fp1);
	fclose(fp2);
	return l;	
}
void outfile(char *s1)
{
	FILE *fp1;
	char buf[100];
	if ((fp1=fopen(s1,"r"))==NULL)
	{
		puts("cann't open file\n");
		exit(0);
	}
	while (fgets(buf,100,fp1)) 
		printf("%s",buf);
	fclose(fp1);
}
int main()
{
	int i,n;
	i=match("d:\\fg.txt","d:\\f2.txt",&n);
	printf("the source data is :\n");
	outfile("d:\\fg.txt");
    printf("\nthe object data is :\n");
	outfile("d:\\f2.txt");
	printf("\n%3.1f%%\n",(i*1.0/n*100));
    return 0;
}