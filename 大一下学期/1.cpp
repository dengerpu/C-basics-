//1. ��һ���ɼ�����ɺ�����ʵ������ɼ��ĺ����������������޸�main������
#include <stdio.h>
void search(int tt[],int min[])
{
//ð������
	int i,j,t;
	for(j=0;j<29;j++)
		for(i=0;i<29-j;i++)
			if(tt[i]>tt[i+1])
			{
				t=tt[i];
				tt[i]=tt[i+1];
				tt[i+1]=t;
			}
			for(i=0;i<3;i++)
				min[i]=tt[i];
//	
/*	ѡ������		
       int i,j,t;
			for(i=0;i<29;i++)
				for(j=i+1;j<30;j++)
					if(tt[i]>tt[j])
					{
						t=tt[i];
						tt[i]=tt[j];
						tt[j]=t;
					}
					for(i=0;i<3;i++)
						min[i]=tt[i];
*/					
}
int main()
{
	int score[30]={76,78,82,69,90,95,97,89,53,59,88,86,79,76,59,91,76,78,82,69,90,91,93,80,54,
		59,88,86,78,76},min[3],i;//score�洢30��ѧ���ɼ���max�洢�ɼ��ĺ�����
	printf("the original data is :\n");
	for(i=0;i<30;i++)
		printf("%3d",score[i]);
	printf("\n");
	search(score,min);
	printf("the result data is :\n");
	printf("tha maxest is %d,the maxer is %d,the max is %d\n",min[0],min[1],min[2]);
	return 0;
}