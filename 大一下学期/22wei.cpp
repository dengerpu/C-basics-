/*22．有一个数组int A[nSize]，要求写一个函数：
void myfunc (int p[], int nSize);
将A中的0都移至数组末尾，将非0的移至开始（保持原来的顺序不变）。（不允许修改main函数）
例如：A原来是：1, 0, 3, 4, 0, -3, 5
经过myfunc处理后为：1, 3, 4, -3, 5, 0, 0    */
#include <stdio.h>
void myfunc(int p[],int nsize)
{
	//
	int i,j,t;
	for(i=0;i<nsize-1;i++)
	{
		if(p[i]==0)
		{
			for(j=i+1;j<nsize;j++)
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
		//		
}
int main()
{
	int st[10]={12,0,0,54,0,0,0,23,24,68},i;
	myfunc(st,10);
	for(i=0;i<10;i++)
		printf("%d\n",st[i]);
	return 0;
}