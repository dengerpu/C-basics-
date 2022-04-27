/*28、
编程：完成search函数，实现统计数据文件zy.dat文件中的所有成绩中不及格的成绩，保存在result.dat文件中
输入数据：65 68 89 74 71 46 91 95 59 74
输出数据：46 59
*/
#include <stdio.h>
#include <stdlib.h> 
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
	FILE *fp1,*fp2;
	int x;
	if((fp1=fopen(s1,"r"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	if((fp2=fopen(s2,"w"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	while(fscanf(fp1,"%d",&x)==1)
	{
		if(x<60)
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