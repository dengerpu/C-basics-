/*22����һ������int A[nSize]��Ҫ��дһ��������
void myfunc (int p[], int nSize);
��A�е�0����������ĩβ������0��������ʼ������ԭ����˳�򲻱䣩�����������޸�main������
���磺Aԭ���ǣ�1, 0, 3, 4, 0, -3, 5
����myfunc�����Ϊ��1, 3, 4, -3, 5, 0, 0    */
#include <stdio.h>
void myfunc(int p[],int nsize)
{
	//
	int i,j,t;
	for(i=0;i<nsize-1;i++)
	{
		if(p[i]==0)
		{
			for(j=i+1;j<nsize;j++)
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
		//		
}
int main()
{
	int st[10]={12,0,0,54,0,0,0,23,24,68},i;
	myfunc(st,10);
	for(i=0;i<10;i++)
		printf("%d\n",st[i]);
	return 0;
}