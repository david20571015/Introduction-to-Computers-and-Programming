#include<stdio.h>

int main(void){
	int n;
	int digit=0,i,j,k,l,num1,num2;
	
	while(scanf("%d",&n)){

		i=1;
		
		while(n>=i){
			digit++;
			i*=10;
		}	
						
		k=10;
		l=1e9;
		while(l>n)
			l/=100;
				
		while(k<l){	
			num1=(n/k)%10;					
			num2=(n/l)%10;			
			n+=(num1*l)-(num1*k)+(num2*k)-(num2*l);	
			k*=100;	
			l/=100;								
		}
		
		printf("%d\n",n);
	}
		
	return 0;
}
