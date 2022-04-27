/*6、
完成copyfile函数，实现复制文件功能
*/
#include <stdio.h>
#include <stdlib.h>
void copyfile(char *s1,char *s2)
{
	FILE *fp1,*fp2;
	char ch;
	if((fp1=fopen(s1,"r"))==NULL)
	{
		puts("cann't open file\n");
		exit(0);
	}	
	if((fp2=fopen(s2,"w"))==NULL)
	{
		puts("cann't open file\n");
		exit(0);
	}
	while(!feof(fp1))
	{
		ch=fgetc(fp1);
		fputc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);	
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
		//  puts(buf);
		printf("%s",buf);
	fclose(fp1);
}
int main()
{
	printf("the original data is :\n");
	outfile("d:\\fg.txt");
	copyfile("d:\\fg.txt","d:\\f2.txt");
    printf("\nthe result data is :\n");
	outfile("d:\\f2.txt");
	printf("\n");
	return 0;		
}