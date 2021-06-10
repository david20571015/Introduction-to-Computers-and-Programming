#include<stdio.h>

int main(void){
	const double f0=2.0E+10;
	
	double v,f1;
		
	f1=2.0000004E+10;
	v=6.685E+8*(f1-f0)/(f1+f0);
	
	printf("(a)%lf\n",v);
	
	v=55;
	f1=f0*(6.685E+8+v)/(6.685E+8-v);
	
	printf("(b)%lf",f1);
	
	return 0;
}
