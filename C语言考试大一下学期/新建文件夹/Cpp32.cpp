/*
33、
编程：现有某高校的设备清单（设备名称，购买日期，价格），输入当前年份，完成deal函数，实现将购买时间超过6年（包括6年）的设备报废，输出新设备总值。
输入数据：2002
输出数据：新的总资产为：5150元
*/
#include <stdio.h>
#include <string.h>
#define N 12
struct  goods
{  
	char  sbmc[30];
	int  gmrq;
	int price;
};
void save(struct goods st[])
{
	FILE *fp;
	int i=0;
	if ((fp=fopen("good.dat","wb"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	for(i=0;i<N;i++)
		fwrite(&st[i],sizeof(struct goods),1,fp);
	fclose(fp);
}
void deal(int year)
{
	FILE *fp;int i=0,j;
	struct goods st[20],pw;
	if((fp=fopen("good.dat","rb"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	while(fread(&pw,sizeof(struct goods),1,fp)==1)
	{
		if(year-pw.gmrq+1<6)
			st[i++]=pw;
	}
	fclose(fp);
	fp=fopen("good.dat","wb");
	for(j=0;j<i;j++)
		fwrite(&st[j],sizeof(struct goods),1,fp);
	fclose(fp);
	
}
int count()
{
	int sum=0;
	FILE *fp; 
	struct goods pw;  
	fp=fopen("good.dat","rb"); 
	while (fread(&pw,sizeof(struct goods),1,fp)==1)
		sum=sum+pw.price; 
	fclose(fp);
	return sum;
}
int main()
{
	int year,zzc;
	struct goods devices[20]={"AA",1995,450,"BB",1997,500,"CC",2000,300,"DD",1997,280,"EE",2011,1000,"FF",2013,1200,"GG",1996,730,"ZZYY",1979,404,"SS",2000,800,"ZZ",2015,610,"TT",2016,900,"VV",2000,340};
	save(devices);
	scanf("%d",&year);
	deal(year);
	zzc=count();
	printf("新的总资产为：%d元\n",zzc);
	return 0;
}
