/*23、1、设有三个候选人（库里，哈登，阿德托昆博），总共有50张选票，完成count函数，统计指定候选人获得的名次。
输入数据：库里
输出数据：第1名
*/
#include <stdio.h>
#include <string.h>
struct  person
{  
	char  name[20];
	int  cnt;
};
int count(struct person st[],char *tt[],char hxr[])
{
	int i,j;
	struct person t;
	for(i=0;i<50;i++)
		for(j=0;j<3;j++)
			if(strcmp(st[j].name,tt[i])==0)
				st[j].cnt++;
			for(i=0;i<2;i++)
				for(j=i+1;j<3;j++)
					if(st[i].cnt<st[j].cnt)
					{
						t=st[i];
						st[i]=st[j];
						st[j]=t;
					}
					for(i=0;i<3;i++)
						if(strcmp(st[i].name,hxr)==0)
						{
							return (i+1);
						}
}
int main()
{
	char *xp[50]={"库里","哈登","阿德托昆博","阿德托昆博","库里","库里","阿德托昆博","库里","阿德托昆博","库里","库里","库里","库里","库里","库里","库里","库里","库里","库里","库里","库里","库里","阿德托昆博","阿德托昆博","哈登","阿德托昆博","阿德托昆博","库里","库里","哈登","库里","哈登","库里","库里","库里","库里","库里","哈登","哈登","哈登","哈登","库里","库里","哈登","哈登","哈登","库里","库里","库里","库里"}; 
	struct person leader[3]={"库里",0,"哈登",0,"阿德托昆博",0};
	int n;
	char hxr[20];
	gets(hxr);
	n=count(leader,xp,hxr);
	printf("第%d名\n",n);
	return 0;
}