//5. 编写函数，统计一批成绩中各分数段的人数。（不允许修改main函数）
#include <stdio.h>
void myfunc(int p[],int nsize,int tt[])
{
//
	int i=0;
	for(i=0;i<30;i++)
	{
		switch(p[i]/10)
		{
		case 10:	
		case 9:tt[4]++;break;
		case 8:
		case 7:tt[3]++;break;
		case 6:
		case 5:tt[2]++;break;
		case 4:
		case 3:tt[1]++;break;
		case 2:
		case 1:
		case 0:tt[0]++;break;
		}
	}
	//
}
int main()
{
	int st[30]={12,65,78,54,65,78,89,23,24,68,77,88,99,100,65,79,60,80,70,77,88,90,95,96,91,85,69,76,74,39},i,tt[5]={0};
	myfunc(st,30,tt);
	for(i=0;i<5;i++)
		printf("%d\n",tt[i]);
	return 0;
}