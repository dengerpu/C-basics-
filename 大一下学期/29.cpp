//29. ѧ����¼��ѧ�źͳɼ���ɣ�N��ѧ���������Ѿ����������з���ṹ�����飬��д�������ѵ���ƽ���ֵ�ѧ�����ݷ���b��ָ�������У�����ƽ���ֵ�ѧ������ͨ���β�n���أ�ƽ����ͨ������ֵ���أ��������޸�main������
#include <stdio.h>
#define N 8
typedef struct 
{
	char num[10];
	double s;
}STREC;
double fun(STREC *a,STREC *b,int *n)
{
	double aver,sum=0.0;
	int i,j=0;
	for(i=0;i<N;i++)
		sum=sum+(a+i)->s;
	aver=sum/N;
	for(i=0;i<N;i++)
		if((a+i)->s<aver)
		{
			*(b+j)=*(a+i);
			j++;
		}
		*n=j;
		return aver;
		
}
void main()
{
	STREC s[N]={{"gao05",85},{"gao03",76},{"gao02",69},{"gao04",85},{"gao01",91},{"gao07",72},{"gao08",64},{"gao06",87}};
	STREC h[N],t;
	int i,j,n;
	double ave;
	ave=fun(s,h,&n);
	printf("the %d student data which is lower than %7.3f:\n",n,ave);
	for(i=0;i<n;i++)
		printf("%s %4.1f\n",h[i].num,h[i].s);
	printf("\n");	
}