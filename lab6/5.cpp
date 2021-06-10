#include<stdio.h>

int main(void){
	double x;
	
	while(scanf("%lf",&x)){
		double arccot=0,term=1.0/x,n=1;
		
		while(term<=-1e-12||term>=1e-12){
			arccot+=term;
			term*=(-1)/x*(n*2-1)/x/(n*2+1);
			n++;
		}
		
		printf("arccot x = %.10lf\n",arccot);		
	}
	
	return 0;
}
