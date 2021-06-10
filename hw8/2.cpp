#include<stdio.h>

double EvalPoly(double a, double b, double c, double x){
	return a*x*x+b*x+c;
}

int main(void){
	double a,b,c,x;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&x);
	printf("%lf",EvalPoly(a,b,c,x));
	return 0;
} 
