/*4��
��һ���ļ��������һ��ѧ����Ϣ��������ѧ�ţ��ɼ�������ɺ���ave����ѧ����ƽ���ɼ���
*/
#include<stdio.h>
#include<stdlib.h>
#define N 10
struct Student
{
	char name[10];
	long num;
	int score;
};
void save()
{
	FILE *fp;
	int i;
	struct Student st;
	if((fp=fopen("d:\\file4.txt","w"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	for(i=0;i<N;i++)
	{
		printf("\n������");scanf(" %s",st.name);
		printf("\nѧ�ţ�");scanf("%ld",&st.num);
		printf("\n�ɼ���");scanf("%d",&st.score);
		fwrite(&st,sizeof(struct Student),1,fp);
	}	
	fclose(fp);
}
float ave()
{
    FILE *fp;
	struct Student st;
	int i;
	float sum=0,aver;
	if((fp=fopen("d:\\file4.txt","r"))==NULL)
	{
		printf("cannot open file\n");
		return 0;
	}
	for(i=0;i<N;i++)
	{
		fread(&st,sizeof(struct Student),1,fp);
			sum+=st.score;
	}
	aver=sum/N;
	fclose(fp);
	return aver;
}
void read()
{
	FILE *fp;
	int i;
	struct Student st;
	if ((fp=fopen("d:\\file4.txt","r"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	for(i=0;i<N;i++)
	{
		fread(&st,sizeof(struct Student),1,fp);
		printf("��ȡ������Ϊ��%s %ld %d\n",st.name,st.num,st.score);
	}
	fclose(fp);
}
int main()
{
	printf("please enter data of student:\n");
	save();
    read();
	float s;
	s=ave();
	printf("ƽ���ɼ�Ϊ��%.2f\n",s);
	return 0;
}