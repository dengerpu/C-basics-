/*27、
编程：完成search函数，实现统计数据文件zy.dat文件中的所有素数，保存在result.dat文件中
输入数据：23 25 27 29 31 78 45 789 645 641
输出数据：23 29 31 641
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
void save(char *s)
{
	FILE *fp;
	int i,x;
	fp=fopen(s,"w");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x);
		fprintf(fp,"%d ",x);
	}
	fclose(fp);
}
void search(char *s1,char *s2)

{
	int x;
	FILE *fp1,*fp2;
	fp1=fopen(s1,"r");
	fp2=fopen(s2,"w");
	while(fscanf(fp1,"%d",&x)==1)
	{
		if(isprime(x))
		{
			fprintf(fp2,"%d ",x);
		}
	}
	fclose(fp1);
	fclose(fp2);
	
}
void read(char *s)
{
	FILE *fp;
	int x;
	fp=fopen(s,"r");
	while ( fscanf(fp,"%d",&x)==1)
		printf("%d ",x);
	fclose(fp);
}
int main()
{
	save("zy.dat");
	search("zy.dat","result.dat");
	read("result.dat");
	printf("\n");
	return 0;
}