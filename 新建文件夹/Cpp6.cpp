//36. �Ӽ�������10��ѧ������Ϣ�������������ɼ������浽�����ļ��ϡ�Ȼ���ٴӴ����ļ��϶�ȡ��2,4,6,8,10��5��ѧ����������������������Ļ����ʾ���������������޸�main������
#include<stdio.h>
#include<stdlib.h>
#define N 10
struct student
{
	char name[10];
	int socre;
}stud[N];
void save()
{
	int i;
	FILE *fp;
	if((fp=fopen("stud.dat","rb"))==NULL)
	{
	printf("���ܴ��ļ�\n");
	exit(0);
	}
	for(i=1;i<10;i=i+2)
	{
	fseek(fp,i*sizeof(struct student),0);
	}
	fclose(fp);
	
}
void read()
{
int i;
	for(i=1;i<10;i=i+2)
	{
	printf("%s %d\n",stud[i].name,stud[i].score);
	}
	
}
int main()
{
	printf("please enter data of student:\n");
	for(int i=0;i<N;i++)	
		scanf("%s,%d",stud[i].name,&stud[i].socre);	
	save();
    read();
	return 0;
}