#include<stdio.h>

int main(void){
	int n=0;
	double x,arcsin;
	printf("x = ");
	scanf("%lf",&x);
	double term=x;

	while((term>=1e-12)||(term<=-1e-12)){
		arcsin+=term;
		n++;
		term=term*(2*n-1)*(2*n)*(2*n-1)/4/n/n/(2*n+1)*x*x;
	}
	
	printf("arcsin %.2lf = %.10lf",x,arcsin);
	
	return 0;
}
