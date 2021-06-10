#include<stdio.h>

int main(void){
	int sum=0,f1=1,f2=1,f3;
	sum=f1+f2;
	printf("1, 1");
	
	while(sum<=1000){
		f3=f1+f2;
		sum+=f3;
		printf(", %d",f3);
		
		f1=f2;
		f2=f3;		
	}
	
	return 0;
}
