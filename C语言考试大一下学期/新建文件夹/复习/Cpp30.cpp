/*30、
编程：针对一批学生信息（姓名，学号，成绩），完成函数sort，评选出学生成绩的前三名。
输入数据：56 69 89 78 63 65 48 72 63 91
输出数据：zy:91,zhj:89,zzs:78
*/
#include<stdio.h>
#include<stdlib.h>
#define N 10
struct Student
{
	char name[20];
	long num;
	int score;
};
typedef struct Student student;
void save(student st[])
{
	FILE *fp;
	int i; 
	if((fp=fopen("file4.txt","w"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	for(i=0;i<N;i++)
	{
		fwrite(&st[i],sizeof(student),1,fp);
	} 
	fclose(fp);
}
void sort(student tt[])
{
	FILE *fp;
	int n=0,i,j;
	student t;
	if((fp=fopen("file4.txt","r"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	while(fread(&tt[n],sizeof(student),1,fp)==1)
		n++;
	fclose(fp);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(tt[i].score<tt[j].score)
			{
				t=tt[i];
				tt[i]=tt[j];
				tt[j]=t;
			}
			
}
int main()
{
	student stud[N]={"why",1001,0,"sl",1002,0,"zhj",1003,0,"zzs",1004,0,"ly",1005,0,"jm",1006,0,"lf",1007,0,"zl",1008,0,"yl",1009,0,"zy",1010,0};
	int i; 
    student tt[N];
	for(i=0;i<N;i++)
		scanf("%d",&stud[i].score);
    //建立数据文件
	save(stud);     
	sort(tt);
    //输出前三名的姓名和成绩
	printf("%s:%d,%s:%d,%s:%d\n",tt[0].name,tt[0].score,tt[1].name,tt[1].score,tt[2].name,tt[2].score);
	return 0;
}