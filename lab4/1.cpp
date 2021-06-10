#include<stdio.h>

int main(void){
	int n,x,ans=0;
	printf("n = ");
	scanf("%d",&n);
	printf("x = ");
	scanf("%d",&x);
	int pow=n;
	
	while(pow<=x){
		pow*=n;
		ans++;
	}
	
	printf("log%d(%d) = %d",n,x,ans);
	
	return 0;
} 
