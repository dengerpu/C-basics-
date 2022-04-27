/*编程：完成search函数，实现统计数据文件zy.dat文件中的所有回文数（及逆序后和原数相等的整数，如1221），保存在result.dat文件中
输入数据：656 12321 121 7 71 46 91 95 1221 232 1979 90404 7910 1204 69898
输出数据：656 12321 121 7 1221 232
*/
#include <stdio.h>
#include <stdlib.h> 
void save(char *s)
{
	FILE *fp;
	int i,x;
	fp=fopen(s,"w");
	for(i=0;i<15;i++)
	{
		scanf("%d",&x);
		fprintf(fp,"%d ",x);
	}
	fclose(fp);
}
void search(char *s1,char *s2)
{
	FILE *fp1,*fp2;
	int a,b,x,sum;
	fp1=fopen(s1,"r");
	fp2=fopen(s2,"w");
	while(fscanf(fp1,"%d",&x)==1)
	{
		sum=0;a=x;
		while(a!=0)
		{
			b=a%10;
			sum=sum*10+b;
			a=a/10;
		}
		if(sum==x)
			fprintf(fp2,"%d ",x);
	}
	fclose(fp1);
	fclose(fp2);
}
void read(char *s)
{
	FILE *fp;
	int x;
	fp=fopen(s,"r"); 
	while (fscanf(fp,"%d",&x)==1)
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
