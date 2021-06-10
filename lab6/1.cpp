#include<stdio.h>

int main(void){
	double pi,term=2,n=1;

	do{
		pi+=term;
		term*=2/(2*n)*n/(2*n+1)*n;
		n++;
	}
	while(term>=1e-20||term<=(-1e-20));
	
	printf("pi = %.10lf",pi);	
	
	return 0;
}
