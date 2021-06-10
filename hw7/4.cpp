#include<stdio.h>

#define f(x) (x)*(x);
#define g(x) 2*(x);


int main(void){
	double x,ans;
	scanf("%lf",&x);
	ans=x;
	
	for(int i=0;i<100;i++)
		ans=ans-(ans*ans-x)/(2*ans);
	
	printf("root(%lf) = %.10lf",x,ans);
	
	return 0;
} 
