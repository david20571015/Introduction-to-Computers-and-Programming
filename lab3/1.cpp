#include<stdio.h>

int main(void){
	int x,n_a,x0=1;
	double ans_a=0;
	
	scanf("%d%d",&n_a,&x);
	printf("------------------(a)------------------\n");
	
	for(int i=0,sign=1;i<=n_a;i++,sign=-sign){
		ans_a+=x0*sign;
		x0*=x;		
	}
	
	printf("1-x+x^2-x^3+...+(-x)^n = %.3lf\n\n\n",ans_a);
	
	int a=1,b=0,n_b;
	scanf("%d",&n_b);
	printf("------------------(b)------------------\n");
	
	for(int i=0;i<=n_b;i++){
		printf("b%d = %d\n",i,b);
		b+=a;		
		a=a*3+1;
	}
	
	
	
	return 0;
}
