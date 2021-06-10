#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
	double p=0;
	const int n=1000;
	double x,y;
	srand(time(NULL));
	
	for(int i=0;i<n;i++){
		x=((double)(rand()+1)/(RAND_MAX+2));
		y=((double)(rand()+1)/(RAND_MAX+2));
		
		if(x*x+y*y<1)
			p++;
	}
	
	printf("P  = %lf\n",p/n);
	printf("pi = %lf\n",p/n*4);
	
	return 0;
} 
