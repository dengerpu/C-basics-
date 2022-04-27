#include<stdio.h> 
#include<string.h> 
void my_copy(char *p,char *q,int m,int n) {
	int i; 
	for(i = m - 1;i < n;i ++) {
		*q = *(p + i);
		q++;
	}
	*q = '\0'; 
} 
int main(int argc, const char *argv[]) { 
	char str1[30],str2[30]; 
	int m,n ; 
	gets(str1); 
	scanf("%d",&m); 
	n = strlen(str1); 
	my_copy(str1,str2,m,n); 
	puts(str2); return 0; 
}