//爱因斯坦曾出过这样一道数学题：有一条长阶梯，若每步跨2阶，最后剩下1阶；
//若每步跨3阶，最后剩下2阶；若每步跨5阶，最后剩下4阶。若每步跨6阶，则最后剩下5阶。只有每步跨7阶，才刚好跨完。求出此阶梯有多少阶。
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<9999;i++)
	{
		if(i%2==1&&i%3==2&&i%5==4&&i%6==5&&i%7==0)
		{
			printf("%d\n",i);
		break;
		}
	}
	return 0;
}