/*10. ��д������m���˵ĳɼ�����score�����У���д����fun��������ƽ���ֵ�������Ϊ����ֵ���أ�������ƽ���ֵķ�������below��ָ�����С����������޸�main������
��score�еĳɼ�Ϊ��10,20,30,40,50,60,70,80,90ʱ���������ص�����Ӧ��4��below�е�����ӦΪ10��20��30��40��*/
#include <stdio.h>
#include <string.h>
int fun(int score[],int m,int below[])
{
	//
	int i,j=0;
	float sum=0.0,aver;
	for(i=0;i<m;i++)
		sum+=score[i];
	aver=sum/m;
	for(i=0;i<m;i++)
		if(score[i]<aver)
		{
			below[j]=score[i];
			j++;
		}
		return j;
		//
}
void main()
{
	int i,n,below[9];
	int score[9]={10,20,30,40,50,60,70,80,90};
	n=fun(score,9,below);
	printf("\nbelow the average score are:");
	for(i=0;i<n;i++)
		printf("%d ",below[i]);
	printf("\n");	
} 