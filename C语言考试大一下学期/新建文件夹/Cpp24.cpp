/*24、
10家公司（AA,BB,CC,DD,EE,FF,GG,HH,II,JJ,KK）投标,每个公司报一次价格，专家经过评标，选出中标公司。
评标规则：最接近平均报价的公司中标。
编程：实现自动评标。
输入数据：76 80 70 83 85 89 88 100 93 99
输出数据：中标的公司为：EE
*/
#include <stdio.h>
#include <math.h>
struct com
{
	char company[20];
	int price;
};
typedef struct com com;
com fun(com *t1,int n)
{
	int i=0,j;
	double sum=0,aver,min;
	for(i=0;i<n;i++)
		sum+=t1[i].price;
	aver=sum/n;
	min=fabs(t1[0].price-aver);
	j=0;
	for(i=0;i<n;i++)
		if(fabs(t1[i].price-aver)<min)
		{
			min=fabs(t1[i].price-aver);
			j=i;
		}
		return t1[j];
}
int main()
{
	com gs[10]={"AA",0,"BB",0,"CC",0,"DD",0,"EE",0,"FF",0,"GG",0,"HH",0,"II",0,"JJ",0};
	int i;
	com zb;
	for(i=0;i<10;i++)
		scanf("%d",&gs[i].price);
	zb=fun(gs,10);
	printf("中标的公司为：%s\n",zb.company);
	return 0;
}