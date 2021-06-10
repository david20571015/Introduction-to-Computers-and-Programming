#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){	
	double x;
	int RANGE=1-0;
	srand(time(NULL));
	
	int RAND_INV_RANGE=((int) ((RAND_MAX*(RAND_MAX+1.0)+RAND_MAX+1) / RANGE));
	
	for(int i=0;i<10;i++){
 		do {
 			x = rand()*(RAND_MAX+1)+rand();
 		} while (x >= RANGE * RAND_INV_RANGE);
 		x /= RAND_INV_RANGE;
 		printf("x=%.5lf\n",x);
 	}
	
	return 0;
}
