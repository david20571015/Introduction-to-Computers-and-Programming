#include<stdio.h>

int main(void){
	int n,digit,di,dj,l;
	float axis;
	
	while(scanf("%d",&n)){
		digit=1;
		for(int i=1;i<n;i*=10)
			digit++;
		digit--;
	
		(digit==0)?printf(" %d\n",n):NULL;
		
		axis=(digit-1)/2.0;
	
		for(int i=0;i<digit;i++){	
			l=1;		
			for(int k=0;k<(digit-1);k++)
				l*=10;
			for(int j=0;j<digit;j++){			
				di=((i-axis)>=0)?(i-axis):(axis-i);
				dj=((j-axis)>=0)?(j-axis):(axis-j);
			
				(di+dj<axis+0.5)?printf(" %d",(n/l)%10):printf("  ");
				l/=10;			
			}
			printf("\n");
		}	
	}
	
	return 0;
}
