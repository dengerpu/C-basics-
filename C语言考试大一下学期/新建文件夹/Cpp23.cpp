/*23??1????????????ѡ?ˣ???????ǣ????????????????ܹ???50??ѡƱ??????count??????ͳ??ָ????ѡ?˻??õ????Ρ?
???????ݣ?????
???????ݣ???1??
*/
#include <stdio.h>
#include <string.h>
struct  person
{  
	char  name[20];
	int  cnt;
};
int count(struct person st[],char *tt[],char hxr[])
{
	int i,j;
	struct person t;
	for(i=0;i<50;i++)
		for(j=0;j<3;j++)
			if(strcmp(st[j].name,tt[i])==0)
				st[j].cnt++;
			for(i=0;i<2;i++)
				for(j=i+1;j<3;j++)
					if(st[i].cnt<st[j].cnt)
					{
						t=st[i];
						st[i]=st[j];
						st[j]=t;
					}
					for(i=0;i<3;i++)
						if(strcmp(st[i].name,hxr)==0)
							j=i+1;
						return j;
}
int main()
{
	char *xp[50]={"????","????","??????????","??????????","????","????","??????????","????","??????????","????","????","????","????","????","????","????","????","????","????","????","????","????","??????????","??????????","????","??????????","??????????","????","????","????","????","????","????","????","????","????","????","????","????","????","????","????","????","????","????","????","????","????","????","????"}; 
	struct person leader[3]={"????",0,"????",0,"??????????",0};
	int n;
	char hxr[20];
	gets(hxr);
	n=count(leader,xp,hxr);
	printf("??%d??\n",n);
	return 0;
}