/*26. һ���಻����30���ˣ���Ա��Ϣ�гɼ���ѧ����ɣ��༶�����Ӽ������룬��ɺ�����ʵ������༶����߷ֺ�ѧ�ţ���ѧ����Ϣ���ճɼ��Ӹߵ�����������������޸�main������*/
#include  <stdio.h>
#define ARR_SIZE 30
struct student
{
	int st;
	long num;
};
int findmax(struct student score[],int n,long *pmaxnum)
{
	//
	int i,j=0,max=score[0].st;
	for(i=1;i<n;i++)
		if(score[i].st>max)
		{
			max=score[i].st;
			j=i;
		}
		*pmaxnum=score[j].num;	
		return max;
		//
}
void sortscore(struct student *score,int n)
{
	int i,j;
	struct student temp1;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if (score[i].st<score[j].st)
			{
				temp1=score[i];score[i]=score[j];score[j]=temp1;			    
			}	
}
int main()
{
	long maxnum;
	struct student score[ARR_SIZE];
	int maxscore,n,i;
	printf("Please enter total number:");
	scanf("%d", &n);	/*�Ӽ�������ѧ������n*/
	printf("Please enter the number and score:\n");
	for(i=0; i<n; i++) 	
	{
		scanf("%ld%d", &score[i].num,&score[i].st);
	}
	maxscore = findmax(score,n, &maxnum);  /*������߷ּ�ѧ��ѧ��*/
	printf("maxscore = %d, maxnum = %ld\n", maxscore, maxnum);
	sortscore(score,n);
	printf("The sort after data is :\n");
	for(i=0;i<n;i++)
		printf("%ld,%d\n",score[i].num,score[i].st);
	return 0;
}