/*15、
统计各年龄段的人数。N个年龄通过调用随机函数获得，并放在主函数的age数组中；要求函数把0至9岁年龄段的人数放在d[0]中，吧10~19段的人数
放在d[1]中，......,把100岁（含100岁）以上年龄段人数都放在d[10]中。结果在主函数中输出。
*/
#include <stdio.h>
#define N 50
#define M 11
void fun(int *a,int *b)
{
	int i=0,j=0;
	for(j=0;j<M;j++)
		b[j]=0;
	while(i<N)
	{
		switch(a[i]/10)
		{
		case 0:b[0]++;break;
		case 1:b[1]++;break;
		case 2:b[2]++;break;
		case 3:b[3]++;break;
		case 4:b[4]++;break;
		case 5:b[5]++;break;
		case 6:b[6]++;break;
		case 7:b[7]++;break;
		case 8:b[8]++;break;
		case 9:b[9]++;break;
		default:b[10]++;break;
		}
		
		i++;
	}
}
double rnd()
{
	static t=29,c=217,m=1024,r=0;
	r=(r*t+c)%m;
	return ((double)r/m);
}
void main()
{
	int age[N],i,d[M];
	//void NONO(int d[M]);
	for(i=0;i<N;i++) age[i]=(int)(115*rnd());
	printf("the original data:\n");
    for(i=0;i<N;i++)
		printf("%4d:%4d\n",(i+1)%10,age[i]);
	printf("\n\n");
	fun(age,d);
	for(i=0;i<10;i++) printf("%4d---%4d:%4d\n",i*10,i*10+9,d[i]);
	printf("over 100:%4d\n",d[10]);
}