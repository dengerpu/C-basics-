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
	double sum=0,aver,a[10],min=9999;
	int w;
	for(int i=0;i<n;i++)
		sum+=t1[i].price ;
	aver=sum/n;
	printf("%f",aver);
	for(i=0;i<n;i++)
	{
		a[i]=fabs(t1[i].price -aver);
		if(min>a[i])
		{
			min=a[i];
			w=i;
		}
	}
	return t1[w];
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