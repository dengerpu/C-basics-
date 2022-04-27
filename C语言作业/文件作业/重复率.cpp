#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int match(char *st1,char *st2,int *k)
{
	FILE *fp1,*fp2;
	char str1[100][100],str2[100][100];
	int i=0,j=0,m,n,t=0;
	if((fp1=fopen(st1,"r"))==NULL)
	{
		printf("can't open file\n");
		exit(0);
	}
	if((fp2=fopen(st2,"r"))==NULL)
	{
		printf("can't open file\n");
		exit(0);
	}
	while(fgets(str1[i],100,fp1)!=NULL)
	{
		i++; 
		m=i; 
	}
	while(fgets(str2[j],100,fp2)!=NULL)
	{
		j++; 
		n=j;
	}
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(strcmp(str1[i],str2[j])==0)
				t++;
	*k=n;
	return t;
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