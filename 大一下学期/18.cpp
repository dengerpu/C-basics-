/*18. ��ѡ��ʵ�ֶ�10���������Ӵ�С��˳�����������Ҫ�����sort1�����������������޸�main������*/
#include<stdio.h>
int main()
{
	int a[10],i,j;	
	void sort(int *);
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\nthe original data is :");
	for(i=0;i<10;i++) printf("%d ",a[i]);
	sort(a);
	printf("\nthe result data is :");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	puts("");
	return 0;
}	
void sort(int *p)
{
	//
	int i,t,j;
	for(i=0;i<9;i++)
		for(j=i+1;j<10;j++)
			if(*(p+i)<*(p+j))
			{
				t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;
			}	
			//			
}