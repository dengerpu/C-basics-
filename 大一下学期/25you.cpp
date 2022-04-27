/*25. 设计候选人得票统计程序，有3个侯选人（分别是杜兰特、哈登、勒布朗），共有50张选票，最后统计出各人的得票和无效票的结果。（完成count函数）*/
#include <stdio.h>
#include <string.h>
struct  person
{  char  name[20];
int  cnt;
};
void count(struct person st[],char *tt[])
{
	int i,j,k;
	for(i=0;i<50;i++)
	{
		k=0;
		for(j=0;j<3;j++)
			if(strcmp(st[j].name,tt[i])==0)
			{
				st[j].cnt++;
				k=1;
			}
			if(k==0)
				st[3].cnt++;
			
	}
	
	
}
void output(struct person st[])
{
	int i;
	printf("\n");
	for(i=0;i<4;i++)
		printf("\n%15s%5d张票",st[i].name,st[i].cnt);
}
int main()
{
	char *xp[50]={"杜兰特","哈登","杜兰特","勒布朗","库里","库里","杜兰特","库里","勒布朗","伦纳德","哈登","哈登","库里","库里","杜兰特","库里","伦纳德","库里","哈登","杜兰特","威斯布鲁克","伦纳德","勒布朗","伦纳德","哈登","勒布朗","勒布朗","库里","库里","哈登","库里","哈登","库里","库里","库里","库里","库里","哈登","哈登","哈登","哈登","库里","库里","哈登","哈登","哈登","库里","库里","库里","库里"};
	struct person leader[4]={"哈登",0,"杜兰特",0,"勒布朗",0,"无效票",0};
	count(leader,xp);
	output(leader);
	printf("\n");
	return 0;
}