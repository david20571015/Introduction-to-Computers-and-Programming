#include<stdio.h>

int main(void){
	double pi=1.0,term=4.0/3.0,n=2.0;
	
	while(term>=1+1e-15){
		pi*=term;
		term=4*n*n/(2*n-1)/(2*n+1);			
		n+=1.0;
	}
		
	printf("%.10lf",pi*2);
	
	return 0;
}
