/*1����д������һ����20��ѧ������ɼ������е�ƽ���ɼ��͵���ƽ���ɼ���������*/
#include<stdio.h>
int main()
{
	int i,count=0;
	float sum=0,aver;
	float a[20],*p;
	printf("������20���˵ĳɼ�\n");
	for(p=a;p<a+20;p++)
		scanf("%f",p);
	p=a;
	for(i=0;i<20;i++)
		sum+=*(p+i);
	aver=(1.0*sum)/20;
	for(i=0;i<20;i++)
		if(*(p+i)<aver)
			count++;
		printf("ƽ���ɼ�:%f\n",aver);
		printf("����ƽ���ɼ�������:%d\n",count);
		return 0;
}