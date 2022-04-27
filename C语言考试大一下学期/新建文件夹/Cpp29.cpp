/*29、
编程：针对一批学生信息（姓名，学号，成绩），完成函数ave，求学生的平均成绩。
输入数据：56 69 89 78 63 65 48 72 63 91
输出数据：平均成绩为：69.40
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
float ave()
{
	FILE *fp;
	student st;
	float sum=0;
	int i=0;
	if((fp=fopen("file4.txt","r"))==NULL)
	{
		printf("cannot open file\n");
	}
	while(fread(&st,sizeof(student),1,fp)==1)
	{
		sum+=st.score;
		i++;
	}
	return sum/i;
	
}
int main()
{
	student stud[N]={"zy",1001,0,"sl",1002,0,"zhj",1003,0,"zzs",1004,0,"ly",1005,0,"jm",1006,0,"lf",1007,0,"zl",1008,0,"yl",1009,0,"hy",1010,0};
	int i;
	float s;
	for(i=0;i<N;i++)
		scanf("%d",&stud[i].score);
	//建立数据文件
	save(stud);     
	s=ave();
	printf("平均成绩为：%.2f\n",s);
	return 0;
}