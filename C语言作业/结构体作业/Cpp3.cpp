/*
3��ѧ����¼��ѧ�źͳɼ���ɣ�N��ѧ���������Ѿ����������з���ṹ�����飬��д�����������ƽ���ֲ�ͳ�Ƴ��ѵ���ƽ���ֵ�ѧ����Ϣ���ݡ�
*/
#include <stdio.h>
typedef struct {
	char num[10];
	double s;
}STREC;
double fun(STREC *a,STREC *b,int *n)
{
	double sum=0,aver;
	int j=0;
	for(int i=0;i<8;i++)
	{
		sum+=a[i].s ;
	}
	aver=sum/8.0;
	for(i=0;i<8;i++)
	{
		if(a[i].s<aver)
		{
			b[j]=a[i];
			j++;
		}
	}
	*n=j;
	return aver;
}
void main()
{
	STREC s[8]={{"gao05",85},{"gao03",76},{"gao02",69},{"gao04",85},{"gao01",91},{"gao07",72},{"gao08",64},{"gao06",87}};
	STREC h[8],t;
	int i,j,n;
	double ave;
	ave=fun(s,h,&n);
	//���ƽ���ɼ�
	printf("the %d student data which is lower than %7.3f:\n",n,ave);
	//�������ƽ���ֵ�ѧ����Ϣ
	for(i=0;i<n;i++)
		printf("%s %4.1f\n",h[i].num,h[i].s);
	printf("\n");	
}