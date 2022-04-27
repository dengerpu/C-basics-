#include<stdio.h>
#include<string.h>
struct telephone
{
	char name[20];
	char tele[13];
};
void search(struct telephone b[],char *x,int n)
{
	int i=0;
	while(strcmp(b[i].name,x)!=0&&i<n)
		i++;
	if(i<n)
		printf("%s\n",b[i].tele);
	else
		printf("无\n");
}
int main()
{
	struct telephone s[5];
	int i=0;
	char na[10],t[13];
	while(1)
	{
		gets(na);
		if(strcmp(na,"#")==0)
			break;
		gets(t);
		strcpy(s[i].name,na);
		strcpy(s[i].tele,t);
		i++;
	}
	printf("查找的姓名:\n");
	gets(na);
	search(s,na,i);
	return 0;
}