/*3��
ͳ��sfile.dat�ļ��е�����������������result.dat�ļ���
*/
#include <stdio.h>
#include <stdlib.h>
int isprime(int x)
{
	int i;
	for(i=2;i<x;i++)
		if (x%i==0) break;
		if (i==x) 
			return 1;
		else	
			return 0;
}
void search(char *s1,char *s2)
{
	FILE *fp1,*fp2;
	int k,sum=0;
	char ch,b=' ';
	if((fp1=fopen(s1,"r"))==NULL)
	{
		printf("���ܴ��ļ�\n");
		exit(0);
	}
	if((fp2=fopen(s2,"w"))==NULL)
	{
		printf("���ܴ��ļ�\n");
		exit(0);
	}
	while(!feof(fp1))
	{
		ch=fgetc(fp1);
		if(ch!=' ')
		{
			k=ch-48;
			sum=sum*10+k;
		}
		if(ch==' ')
		{
			if(isprime(sum))
			{
				fprintf(fp2,"%d",sum);
				fputc(b,fp2);
			}
			sum=0;
		}
	}
	fclose(fp1);
	fclose(fp2);	
}
int main()
{
	search("d:\\mysele.dat","d:\\result.dat");
	return 0;
}