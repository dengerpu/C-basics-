/*��ŵ�����⣨�ֳ�Ϊ���������⣩����һ�������֪�����⡣��A��B��C���������ϣ���n����ͬ��С��Բ�̣�����뾶�ֱ�Ϊ1-n�ɣ���һ��ʼ���Ƕ�������A�ϣ���ͼ��ʾ�������Ŀ���������ٵĺϷ��ƶ������ڽ��������Ӵ�A���ƶ���C����

  ��Ϸ�е�ÿһ���������£�
  
	1. ÿһ��ֻ�����ƶ�һ�����ӣ���һ���������Ϸ�����һ�����ӵ����Ϸ���
	
	  2. �ƶ��Ĺ����У�����뱣֤������Ӳ�����С�������Ϸ���С�Ŀ��Է��ڴ�����棬����������治�����κ�������С�����ӣ�
	  
		
		  
			�����n=3�������һ���Ϸ����ƶ�����ʽ��
			
			  1 from A to C
			  
				2 from A to B
				
				  1 from C to B
				  
					3 from A to C
					
					  1 from B to A
					  
						2 from B to C
						
						  1 from A to C
						  
							
							  
����һ����n��������ٲ������ƶ�����*/
#include<stdio.h>
int j=0;
int f1(int n)
{
	if(n==1)
		j++;
	else
	{
		f1(n-1);
		j++;
		f1(n-1);
	}
	return j;
}

void f(int n,char a,char b,char c)
{
	if(n==1)
		printf("%d from %c to %c\n",n,a,c);
	else
	{
		f(n-1,a,c,b);
		printf("%d from %c to %c\n",n,a,c);
		f(n-1,b,a,c);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",f1(n));
	f(n,'A','B','C');
	return 0;
}


