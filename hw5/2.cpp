#include<stdio.h>

int main(void){
	double x,sin=0;
	int sign=1,i=2;
	scanf("%lf",&x);
	double term=x;
	
	while(term>1e-8){
		sin+=term*sign;
		sign=-sign;
		term=term*x*x/i/(i+1);
		i+=2;
	}
	
	printf("sin(%.2lf) = %lf",x,sin);	
	
	return 0;
}
