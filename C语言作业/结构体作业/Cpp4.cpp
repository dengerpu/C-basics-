/*
4��10�ҹ�˾��AA,BB,CC,DD,EE,FF,GG,HH,II,JJ,KK������Ͷ��,ÿ����˾��һ�μ۸�ר�Ҿ������꣬ѡ���б깫˾��
���������ӽ�ƽ�����۵Ĺ�˾�бꡣ
��̣�ʵ���Զ����ꡣ
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
	printf("�б�Ĺ�˾Ϊ��%s\n",zb.company);
	return 0;
}