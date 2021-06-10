#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int random(int a,int b){
	return (int)((double)rand()/(RAND_MAX+1.0)*(b-a+1.0));
}

int main(void){
	int die[6]={0,0,0,0,0,0};
	srand(time(NULL));
	
	for(int i=0;i<100;i++)
		die[random(0,5)]++;		
	
	for(int i=0;i<6;i++){
		printf("%d.:",i+1);
		for(int j=0;j<die[i];j++)
			printf("*");
		printf("\n");
	}	
	return 0;
} 
