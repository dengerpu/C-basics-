//3、w是一个大于10的无符号整数，若w是n(n>=3)位的整数，编程求出w的中间数（如原始数据为45632取值为632，即去掉最高位和最低位后的数）。
#include<stdio.h>
#include<math.h>
int f(int w)
{
	int a,i=0,s=0;
	w=w/10;
	while(w/10!=0)
	{
		a=w%10;
		s+=a*pow(10,i);
		w=w/10;
		i++;
	}
	return s;
}
int main()
{
	int w;
	scanf("%d",&w);
	printf("%d\n",f(w));
	return 0;
}