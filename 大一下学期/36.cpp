//36. �Ӽ�������10��ѧ������Ϣ�������������ɼ������浽�����ļ��ϡ�Ȼ���ٴӴ����ļ��϶�ȡ��2,4,6,8,10��5��ѧ����������������������Ļ����ʾ���������������޸�main������
#include<stdio.h>
#include<stdlib.h>
#define N 10
struct Student
{
	char name[10];
	int socre;
}stud[N];
void save()
{
	FILE *fp;
	if((fp=fopen("file1.txt","rb"))==NULL)
		printf("���ܴ��ļ�\n");
	else
		exit(0);
	
}
void read()
{
	int i;
	FILE *fp;
	for(i=2;i<10;i=i+2)
	{
		fseek(fp,i*sizeof(struct student),0);
		fread(&stud[i],sizeof(struct student),1,fp);
		printf("%s  %d  %d  %c\n",stud[i].name,stud[i].score);
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