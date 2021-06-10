#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	srand(time(NULL));
	
	printf("------(a)------\n");
	printf("%d",rand()*(RAND_MAX+1)+rand());
	
	printf("\n\n------(b)------\n");
	double n;
	for(int i=0;i<10;i++){
		n=((rand()*(RAND_MAX+1)+rand())/(RAND_MAX*(RAND_MAX+1.0)+RAND_MAX+1))*(99999-0+1.0);		
		printf("%d\n",(int)n);
	}
	
	return 0;
}
