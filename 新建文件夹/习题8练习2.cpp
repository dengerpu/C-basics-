#include<stdio.h>
struct student
{
char name[20];
float score;
};
void sort(struct student stu[],int n)
{
	struct student t;
int i,j;
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(stu[i].score>stu[j].score)
{t=stu[j];
stu[j]=stu[i];
stu[i]=t;
}
for(i=0;i<n;i++)
printf("%s   %.2f\n",stu[i].name,stu[i].score);
}
int main()
{
	struct student stu[3]={{"zhang",30},{"li",50},{"san",40}};
	sort(stu,3);

return 0;
}
