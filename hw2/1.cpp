#include<stdio.h>

int main(){
	double n,p2=0;
	int p1=0;
	
	printf("the input value is ");
	scanf("%lf",&n);
	p1=n;
	p2=n-p1;
	printf("the whole part is %d\n",p1);
	printf("the decimal(fraction) part is %lf",p2);
	
	return 0;
}
