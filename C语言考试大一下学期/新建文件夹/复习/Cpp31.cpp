/*31��
��̣����ж�ʮ��ѡƱ��������ѡ�ˣ����fun������ͳ��Ʊ����Ʊ���õ�Ʊ����
�������ݣ����� ���� ���� ���� ���� ���� ���������� ���� ���� ���� ���� ���� ���� ���� ���� ���� ���������� ���� ���� ����
������ݣ�Ʊ���ǣ�����,��Ʊ��10
*/
#include <stdio.h>
#include <string.h>
#define N 20
struct  person
{  char  name[20];
int  cnt;
};
void save()
{
	FILE *fp;
	char st[20];
	int i=0;
	if ((fp=fopen("xp1.dat","wb"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	for(i=0;i<N;i++)
	{   
		scanf("%s",st);     
		fputs(st,fp);
		fputs("\r\n",fp);
	}
	fclose(fp);
}
struct person fun(struct person leader[])
{
	char st[20];
	FILE *fp;
	int length,i,max,j;
	fp=fopen("xp1.dat","rb");
	while(fgets(st,20,fp))
	{
		length=strlen(st);
		st[length-2]='\0';
		for(i=0;i<3;i++)
			if(strcmp(st,leader[i].name)==0)
				leader[i].cnt++;
	}
	max=leader[0].cnt;
	j=0;
	for(i=0;i<3;i++)
		if(leader[i].cnt>max)
		{
			max=leader[i].cnt;
			j=i;
		}
		return leader[j];
}
int main()
{
	char *xp[N];
	char data[N][20];
	int i;
	struct person leader[3]={"����",0,"����",0,"����������",0},pw;
	for(i=0;i<N;i++)
		xp[i]=data[i];
	save();
	pw=fun(leader);
	printf("Ʊ���ǣ�%s,��Ʊ��%d\n",pw.name,pw.cnt); 
	return 0;
}