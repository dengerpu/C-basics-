#include<stdio.h>
struct person
{
int num;
int nextp;
}link[14];
int main()
{
int i,count,h,k;
for(i=1;i<=13;i++)
{
if(i==13)
link[i].nextp=1;
else
link[i].nextp=i+1;
link[i].num=i;
}
count=0;
h=13;
scanf("%d",&k);
while(count<12)
{
i=0;
while(i!=k)
{
h=link[h].texp;
if(link[h].num)
i++;

}
printf("%4d",link[h].num);

Î´Íæ


}


}