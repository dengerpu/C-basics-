/*24��
10�ҹ�˾��AA,BB,CC,DD,EE,FF,GG,HH,II,JJ,KK��Ͷ��,ÿ����˾��һ�μ۸�ר�Ҿ������꣬ѡ���б깫˾��
���������ӽ�ƽ�����۵Ĺ�˾�бꡣ
��̣�ʵ���Զ����ꡣ
�������ݣ�76 80 70 83 85 89 88 100 93 99
������ݣ��б�Ĺ�˾Ϊ��EE
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
	printf("�б�Ĺ�˾Ϊ��%s\n",zb.company);
	return 0;
}