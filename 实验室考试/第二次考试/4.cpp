/*������
N���˾�ѡ�೤��¼��n���˵���Ϣ���������Ա�ѧ�ţ���ĩƽ���ɼ����ӵ�һ���˴�һ������ʼ������
�������������˳���ѡ��������µ���Ϊ�೤������೤�ĸ�����Ϣ.��Ҫ���ö�̬����*/
#include<stdio.h>
struct student
{
	int a;
	char name[20];
	char sex;
	int num;
	float score;
}stud[100];
int main()
{
	int n,i,c,k=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %c %d %f",&stud[i].name,&stud[i].sex,&stud[i].num,&stud[i].score);
	for(i=0;i<n;i++)
		stud[i].a=i+1;
	c=n;
	i=0;
	k=1;
	while(c>1)
	{
		if(stud[i].a!=0)
		{
			i++;
			k++;
		}
		if(k==3)
		{
			stud[i].a=0;
			k=0;
			c--;
			i++;
		}
		if(i==n)
			i=0;
	}
	for(i=0;i<n;i++)
	{
		if(stud[i].a!=0)
			j=i;
	}
	printf("%s\n%c\n%d\n%f\n",stud[j].name,stud[j].sex,stud[j].num,stud[j].score);
	return 0;
}
