#include<stdio.h>

int main(){
	double r,r1,r2,r3,r4,r5;
	
	scanf("%lf%lf%lf%lf%lf",&r1,&r2,&r3,&r4,&r5);
	r=1/((1.0/r1)+(1.0/r2)+(1.0/r3)+(1.0/r4)+(1.0/r5));
	
	printf("R=%lf",r);
	
	return 0;	
}
