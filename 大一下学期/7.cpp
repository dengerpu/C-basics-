//7. ��д����������4���������ҳ�������С�������ú�����Ƕ�׵������������������޸�main������
#include<stdio.h>
int max2(int a,int b)    
{
	if(a>b)
		return a;
	else
		return b;	
}
int max4(int a,int b,int c,int d)    
{  	            
	int x,y,z;
	x=max2(a,b);
	y=max2(x,c);
	z=max2(y,d);
	return z;       
}  
int main()
{	
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);            
	printf("max=%d\n",max4(a,b,c,d));
	return 0;
}