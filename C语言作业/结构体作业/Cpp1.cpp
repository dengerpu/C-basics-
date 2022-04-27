/*1、设有三个候选人（库里，哈登，阿德托昆博），总共有50张选票，完成函数，统计出本赛季的票王。*/
#include <stdio.h>
#include <string.h>
struct  person
{ 
	char  name[20];
	int  cnt;
};
//统计谁是票王！！
struct person count(struct person st[],char *tt[])
{
	int i,j,max=0,k=0;
	for(j=0;j<50;j++)
	{
		for(i=0;i<3;i++)
		{
			if(strcmp(st[i].name,tt[j])==0)
				st[i].cnt++;
		}
	}
	for(i=0;i<3;i++)
	{
		if(st[i].cnt>max)
		{
			max=st[i].cnt;
			k=i;
		}
	}
	return st[k];
	
}
void output(struct person st)
{
	printf("本赛季票王是%s，共得到选票%d张\n",st.name,st.cnt);
}
int main()
{
	char *xp[50]={"库里","哈登","阿德托昆博","阿德托昆博","库里","库里","阿德托昆博","库里","阿德托昆博","库里","库里","库里","库里","库里","库里","库里","库里","库里","库里","库里","库里","库里","阿德托昆博","阿德托昆博","哈登","阿德托昆博","阿德托昆博","库里","库里","哈登","库里","哈登","库里","库里","库里","库里","库里","哈登","哈登","哈登","哈登","库里","库里","哈登","哈登","哈登","库里","库里","库里","库里"};	
	struct person leader[3]={"库里",0,"哈登",0,"阿德托昆博",0};
	struct person pw;
	pw=count(leader,xp);
	output(pw);
	printf("\n");
	return 0;
}