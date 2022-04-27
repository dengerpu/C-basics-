#include<stdio.h>
void printDigit(int n){
	printf("%d",n%10);
	if(n>10)
		printDigit(n/10);
}
int main(){
	int n;
	scanf("%d",&n);
	printDigit(n);
	puts("");
	return 0;
}