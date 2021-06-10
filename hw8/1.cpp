#include<stdio.h>

bool IsPrime(int x){
	for(int i=2;i*i<=x;i++)
		if(x%i==0)
			return 0;
	return 1;	
}

int main(void){
	int x;
	scanf("%d",&x);	
	printf("%d",IsPrime(x));		
	return 0;
} 
