#include<stdio.h>

int main(void){
	int n,i=1e9;
	scanf("%d",&n);
	
	while(n/i==0)
		i/=10;
			
	while(n>0){
		printf("%d ",n/i);
		n%=i;
		i/=10;
	}	
	
	return 0;
}
