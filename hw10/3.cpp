#include<stdio.h>

int way(int n){
	if(n==1)
		return 1;
	if(n==2)
		return way(1)+1;
	if(n==3)
		return way(2)+way(1)+1;
	return way(n-1)+way(n-2)+way(n-3);
}

int main(void){
	int n;
	scanf("%d",&n);
	printf("the number of ways is %d",way(n));	
	return 0;
} 
