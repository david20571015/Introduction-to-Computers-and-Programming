#include<stdio.h>

int main(void){
	const double a=0,b=10,h=0.1;
	double area1=0,area2=0;
	
	for(double i=a+h,y1;i<=b-h;i+=h){
		y1=8*i*i*i+3*i*i+6*i+10;
		area1+=y1; 
	}
	area1=h/2*(10+8370+2*area1);
	
	
	printf("(a)%lf\n",area1);
		
		
	for(double i=a,y1;i<=b;i+=h){
		y1=8*i*i*i+3*i*i+6*i+10;
		area2+=y1; 
	}
	area2*=h;
	
	printf("(b)%lf",area2);	
	
	return 0;
}
