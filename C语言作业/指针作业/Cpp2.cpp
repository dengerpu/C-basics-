//2��һ���࣬��3��ѧ����4�ſγ̣�������пγ̲������ѧ�����пγ�?
#include<stdio.h>
int main()
{
	float a[3][5],(*p)[5];
	p=a;
	int i,j,b[3]={0};
	printf("������:\n");
	printf("ѧ����ţ����ģ���ѧ��Ӣ�C���ԣ�\n");
	for(i=0;i<3;i++)
		for(j=0;j<5;j++)
			scanf("%f",*(p+i)+j);
		for(i=0;i<3;i++)
			for(j=1;j<5;j++)
				if(*(*(p+i)+j)<60)
					b[i]=1;
				printf("ѧ����ţ����ģ���ѧ��Ӣ�C���ԣ�\n");
				for(i=0;i<3;i++)
				{
					if(b[i]==1)
					{
						printf("%.0f",**(p+i));
						for(j=1;j<5;j++)
							printf("  %.2f",*(*(p+i)+j));
					}
						printf("\n");
				}
				return 0;									
}
