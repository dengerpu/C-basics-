/*31. ��5��ѧ����ÿ��ѧ����4�ſγ̵ĳɼ�����������ѧ�ţ������ѧ����ȫ���ɼ������fun��������
������2�����88 77  67 78*/
#include<stdio.h>
int *fun(int (*p)[4],int n)
{ 
	int i;
	for(i=0;i<5;i++)
		if(n-1==i)
			return *(p+i);
		
		
}
int main()
{ 
	int *p1,m,i,stu[5][4]={{78,89,87,90},{88,77,67,78},{93,89,90,67},{76,77,88,99},{45,67,87,98}};
	printf("input m:\n");
	scanf("%d",&m);
	printf("\n");
	p1=fun(stu,m);
	for(i=0;i<4;i++)
		printf("%d ",*(p1+i));
	printf("\n");
	return 0;
}