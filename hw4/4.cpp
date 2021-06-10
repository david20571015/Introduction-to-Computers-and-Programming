#include<stdio.h>

int main(void){
	int input=1,sum0=0,sum1=0;
	printf("The input is ");
	
	while(input){
		scanf("%d",&input);
		sum1+=input;
		if(sum1>sum0)
			sum0=sum1;
		if(sum1<0){
			sum1=0;
			sum0=0;
		}
	}
	
	printf("The maximum sum of consecutive value is %d.",sum0);
	
	return 0;
}
