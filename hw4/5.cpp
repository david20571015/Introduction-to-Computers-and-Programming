#include<stdio.h>

int main(void){
	int coupon,bar,add;
	printf("money=");
	scanf("%d",&bar);
	coupon=bar;
	
	
	while(coupon>=7){
		add=coupon/7;
		bar+=add;
		coupon%=7;
		coupon+=add;
	}
	
	printf("%d chocolate bars and %d coupons",bar,coupon);	
	
	return 0;
}
