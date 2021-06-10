#include<stdio.h>

double Round(double x, int places){
	double n=1;
	for(int i=0;i<places;i++)
		n*=10;
	return (double)((int)((x+0.5/n)*n))/n;
}

int main(void){
	double x;
	int places;
	scanf("%lf %d",&x,&places);
	printf("%lg",Round(x,places));			
	return 0;
} 
