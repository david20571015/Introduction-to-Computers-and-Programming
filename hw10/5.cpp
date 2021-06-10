#include<stdio.h>

int way(int n){
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	return way(n-1)+way(n-2);
}

int main(void){
	int n;
	scanf("%d",&n);
	printf("the number of ways to cover this board is %d",way(n));	
	return 0;
} 
