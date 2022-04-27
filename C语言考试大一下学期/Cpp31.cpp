/*31、
编程：现有二十张选票，三个候选人，完成fun函数，统计票王和票王得的票数。
输入数据：库里 哈登 库里 哈登 哈登 库里 阿德托昆博 库里 哈登 库里 库里 哈登 库里 哈登 哈登 库里 阿德托昆博 库里 哈登 库里
输出数据：票王是：库里,得票：10
*/
#include <stdio.h>
#include <string.h>
#define N 20
struct  person
{  char  name[20];
int  cnt;
};
void save()
{
	FILE *fp;
	char st[20];
	int i=0;
	if ((fp=fopen("xp1.dat","wb"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	for(i=0;i<N;i++)
	{   scanf("%s",st);     
	fputs(st,fp);
	fputs("\r\n",fp);
	}
	fclose(fp);
}
struct person fun(struct person leader[])
{
	FILE *fp;
	int i,length;	char st[20];
	struct person pw;
	if((fp=fopen("xp1.dat","rb"))==NULL)
	{
		printf("cannot open file");
	}
	while(!feof(fp))
	{
		fgets(st,20,fp);
		length=strlen(st);
		st[length-2]='\0';
		for(i=0;i<3;i++)
			if(strcmp(leader[i].name ,st)==0)
				leader[i].cnt++;
	}
	pw=leader[0];
	for(i=1;i<3;i++)
		if(leader[i].cnt>pw.cnt)
			pw=leader[i];
		return pw;
}
int main()
{
	char *xp[N];
	char data[N][20];
	int i;
	struct person leader[3]={"库里",0,"哈登",0,"阿德托昆博",0},pw;
	for(i=0;i<N;i++)
		xp[i]=data[i];
	save();
	pw=fun(leader);
	printf("票王是：%s,得票：%d\n",pw.name,pw.cnt); 
	return 0;
}
