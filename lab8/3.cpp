#include<stdio.h>

int GCD(int a, int b){
	if(b==0)
		return a;
	return GCD(b,a%b);
}

void parse(int a3,int a2,int a1,int a0){
	bool f=1;
	double x;
	int q=0,p=0,a00;
	
	if(a3<0){
		a3=-a3;
		a2=-a2;
		a1=-a1;
		a0=-a0;
	}
	a00=(a0<0)?-a0:a0;

	for(q=1;q<=a3;q++){
		for(p=1;p<=a00;p++){
			x=(double)p/q;		
			if((((a3*x*x*x+a2*x*x+a1*x+a0)<=1e-6)&&((a3*x*x*x+a2*x*x+a1*x+a0)>=-1e-6))&&(GCD(q,p)==1)){
				printf("%lg\n",x);
				f=0;
			}	
			if((((-a3*x*x*x+a2*x*x-a1*x+a0)<=1e-6)&&((-a3*x*x*x+a2*x*x-a1*x+a0)>=-1e-6))&&(GCD(q,p)==1)){
				printf("%lg\n",-x);
				f=0;
			}		
		}
	}
	if(f)
		printf("No rational solution.\n");
}

int main(void){
	int a3,a2,a1,a0;
	while(scanf("%d %d %d %d",&a3,&a2,&a1,&a0)){
		parse(a3,a2,a1,a0);	
		printf("\n");
	}
	return 0;
}
