#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	srand(time(NULL));	
	double num;
	
	printf("------(a)------\n");
	for(int i=0;i<10;i++){
		num=rand()%(34-12)+12;
		printf("%3.0lf",num);
	}
	
	printf("\n\n------(b)------\n");
	printf("%d",RAND_MAX);
	
	printf("\n\n------(c)------\n");
	for(int i=0;i<10;i++){
		num=rand()/(RAND_MAX+1.0)*(34-12)+12;	
		printf("%3.0lf",num);
	}	
	
	printf("\n\n------(d)------\n");
	for(int i=0;i<10;i++){
		num=rand()/(RAND_MAX+1.0)*(34-12)+12;
		printf("%7.4lf",num/10.0);
	}
	
	printf("\n\n------(e)------\n");
	double nuni=0,uni=0;
	for(int i=0;i<1e8;i++){
		num=(rand()%(34-12)+12)/10.0;
		if(num>=2.3)
			nuni++;
	}
	for(int i=0;i<1e8;i++){
		num=rand()/(RAND_MAX+1.0)*(34-12)+12;
		num/=10;
		if(num>=2.3)
			uni++;
	}
	printf("Theoretical: 0.500000\nNonUniform : %lf\nUniform    : %lf\n",nuni/1e8,uni/1e8);
	
	return 0;
}
