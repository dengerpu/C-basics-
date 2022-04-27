#include<stdio.h>  
int main() 
{ 
 int a,b,c,k;
 printf("ÇëÊäÈëĞĞÊı£º");
 scanf("%d",&k);
 int i[k][k];
for(a=0;a<k;a++)
{
i[a][a]=1;i[a][0]=1;
}
for(a=2;a<k;a++)
for(b=1;b<=a-1;b++)
i[a][b]=i[a-1][b-1]+i[a-1][b];
for(a=0;a<k;a++)
{
	for(b=0;b<=a;b++)
		printf("%3d",i[a][b]);
	printf("\n");
}
printf("\n");
	return 0;
}