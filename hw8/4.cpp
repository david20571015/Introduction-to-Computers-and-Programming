#include<stdio.h>

double force(double volt){
	if(volt<-0.2)
		return volt;
	if(volt>0.2)
		return 2*volt;
	return 0;
}

int main(void){
	double position,volt;
	scanf("%lf",&position);
	
	while(scanf("%lf v,",&volt))
		position+=force(volt);
	
	printf("%lf",position);		
	return 0;
} 
