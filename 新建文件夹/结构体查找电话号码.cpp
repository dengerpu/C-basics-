#include<stdio.h>
#include<string.h>
struct telephone
{
	char name[10];
	char tele[12];
};
void search(struct telephone b[],char *x,int n)
{
	int i=0;while(strcmp(b[i].name,x)!=0&&i<n)
		i++;
	if(i<n)
		printf("%s\n",b[i].tele);
	else
		printf("��\n");
}
int main()
{
	struct telephone s[5];
	int i=0;
	char na[20],tel[12];
	while(1)
	{
		gets(na);
		if(strcmp(na,"#")==0)
			break;
		gets(tel);
		strcpy(s[i].name,na);
		strcpy(s[i].tele,tel);
		i++;
	}
	printf("���ҵ�������\n");
	gets(na);
	search(s,na,i);
	return 0;
}