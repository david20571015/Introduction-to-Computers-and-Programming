#include<stdio.h>
#include<math.h>

double s(int n){
	if(n==2)
		return 1/2.;
	return s(n-1)+1./(n-1)-1./n;
}

double pi(int n){
	if(n==0)
		return 4.;
	return pi(n-1)*(2*n)/(2*n+1)*(2*n+2)/(2*n+1);
}

int main(void){
	int n;
	
	printf("(a) n>=2\nn = ");
	scanf("%d",&n);
	printf("s = %lf\n\n",s(n));
	
	printf("(b) n>=0\nn = ");
	scanf("%d",&n);
	printf("pi = %lf\n\n",pi(n));
	
	n=0;
	printf("(c)\n");
	while(fabs(pi(n)-M_PI)>0.005)
		n++;
	printf("when n = %d\npi = %lf",n,pi(n));
		
	return 0;
} 
