/*15��
ͳ�Ƹ�����ε�������N������ͨ���������������ã���������������age�����У�Ҫ������0��9������ε���������d[0]�У���10~19�ε�����
����d[1]�У�......,��100�꣨��100�꣩�������������������d[10]�С�������������������
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