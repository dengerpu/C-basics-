/*
4、10家公司（AA,BB,CC,DD,EE,FF,GG,HH,II,JJ,KK）参与投标,每个公司报一次价格，专家经过评标，选出中标公司。
评标规则：最接近平均报价的公司中标。
编程：实现自动评标。
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
	double sum=0,aver;
	double a[100],min;
	int k=0;
	for(int i=0;i<n;i++)
		sum+=t1[i].price;
	aver=sum/n;
	printf("aver%f\n",aver);
	for(i=0;i<n;i++)
		a[i]=t1[i].price-aver;
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			k=i;
		}	
	}
	return t1[k];	
}
int main()
{
	com gs[10]={"AA",76,"BB",80,"CC",70,"DD",83,"EE",85,"FF",89,"GG",88,"HH",100,"II",93,"JJ",99};
	com zb;
	zb=fun(gs,10);
	printf("中标的公司为：%s\n",zb.company);
	return 0;
}