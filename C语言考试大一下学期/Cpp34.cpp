/*34、
编程：一批学生成绩信息（姓名，成绩1，成绩2，成绩3，成绩4），完成search函数，统计本次考试中某道题(1~4)的得分率。
输入数据：2
输出数据：第2题得分率：73.6%
*/
#include <stdio.h>
#include <stdlib.h> 
struct Student
{
	char name[20];
	int score[4];//依次存储该生每一道题的得分，原始题目分值都是25分
};
typedef struct Student student;
void save(char *s,student stu[])
{
	FILE *fp;
	int i,x;
	fp=fopen(s,"w");
	for(i=0;i<10;i++)
		fwrite(&stu[i],sizeof(student),1,fp); 
	fclose(fp);
}
void search(char *s1,char *s2)
{
	FILE *fp1,*fp2;
	student st;
	int i=0;
	double sum1,sum2,sum3,sum4;
	sum1=sum2=sum3=sum4=0;
	if((fp1=fopen(s1,"r"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	if((fp2=fopen(s2,"w"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	while(fread(&st,sizeof(student),1,fp1)==1)
	{
		sum1+=st.score [0];
		sum2+=st.score [1];
		sum3+=st.score [2];
		sum4+=st.score [3];
		i++;
	}
	sum1/=(i*25);sum2/=(i*25);sum3/=(i*25);sum4/=(i*25);
	fprintf(fp2,"%f %f %f %f",sum1,sum2,sum3,sum4);
	fclose(fp1);
	fclose(fp2);
	
}
void read(char *s,int n)
{
	FILE *fp;
	float x;
	int i=0;
	fp=fopen(s,"r"); 
	while (fscanf(fp,"%f",&x)==1)
	{
		i++;
		if (i==n)
		{printf("第%d题得分率：%.1f%%",i,x*100);break;}
	}
	fclose(fp);
}
int main()
{
	student stu[]={"AA",18,17,25,20,"BB",20,10,15,25,"CC",20,15,20,12,"DD",18,20,20,10,"EE",16,18,20,18,"FF",10,25,20,10,"GG",10,25,20,10,"HH",20,19,20,20,"II",20,10,25,20,"JJ",20,25,20,16};
	int n;
	save("zy.dat",stu);
	search("zy.dat","result.dat");
	printf("输入题目编号：");
	scanf("%d",&n);
	read("result.dat",n);
	printf("\n");
	return 0;
}