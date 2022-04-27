#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 54
void shuffle(int deck[]);
void deal(int arr[]);
void Card(int card);
int main()
{
	int deck[N];
	srand(time(NULL));
	shuffle(deck);
	deal(deck);
	return 0;
}
void shuffle(int deck[])
{
	int used[N];
	int i,card;
	for(i=0;i<N;i++)
		used[i]=0;
	for(i=0;i<N;i++)
	{
		do
		{
			card=rand()%54;
		}while(used[card]==1);
		deck[i]=card;
		used[card]=1;
	}
}
void deal(int deck[])
{
	int i;
	for(i=0;i<N;i++)
	{
		Card(deck[i]);
	}
}
void Card(int card)
{
	char *suit[4]={"黑桃","红桃","梅花","方块"};
	char *face[14]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
	if(card==52)
		printf("小王\n");
	else if(card==53)
		printf("大王\n");
	else
		printf("%s %s\n",suit[card/13],face[card%13]);
}