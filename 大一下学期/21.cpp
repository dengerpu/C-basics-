/*21. 用冒泡法实现对10个整数按从小到大的顺序排序输出（完成sort1函数）。*/
#include<stdio.h>
int main()
{
	int a[10],i,j;	
	void sort1(int *);
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\nthe original data is :");
	for(i=0;i<10;i++) printf("%d ",a[i]);
	sort1(a);
	printf("\nthe result data is :");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	puts("");
	return 0;
}	
void sort1(int *p)
{
	//
	int i,j,t;
	for(j=0;j<9;j++)
		for(i=0;i<9-j;i++)
			if(*(p+i)<*(p+i+1))
			{
				t=*(p+i);
				*(p+i)=*(p+i+1);
				*(p+i+1)=t;
			}	
			//
			
}