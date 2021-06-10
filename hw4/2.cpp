#include<stdio.h>

int main(void){
	int n=1,sign=1;
	double ans=0;
	
	while(1.0/n>=1E-06){
		ans+=(1.0/n)*sign;
		sign=-sign;
		n+=2;
	}
	
	printf("PI/4 = %lf",ans);
	
	return 0;
}
