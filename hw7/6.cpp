#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int random(int a,int b){
	return (int)((double)rand()/(RAND_MAX+1.0)*(b-a+1.0)+1);
}

int main(void){
	int r,s,k;
	srand(time(NULL));
	
	r=random(1,13);		
	s=random(1,4);

	switch(r){
		case 1:
			printf("Ace");
			break;
		case 2 ... 10:
			printf("%d",r);
			break;
		case 11:
			printf("Jack");
			break;
		case 12:
			printf("Queen");
			break;
		case 13:
			printf("King");
			break;
	}
	
	printf(" of ");
	
	switch(s){
		case 1:
			printf("Clubs");
			break;
		case 2:
			printf("Diamond");
			break;
		case 3:
			printf("Hearts");
			break;
		case 4:
			printf("Spades");
			break;
	}

	return 0;
} 
