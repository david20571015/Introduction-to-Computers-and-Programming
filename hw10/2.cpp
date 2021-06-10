#include<stdio.h>

double power(int x, int y){
	if(y>=0){
		if(y==0)
			return 1;
		if(y==1)
			return x;
		return x*power(x,y-1);
	}
	return 1./power(x,-y);
}

int main(void){
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d^%d = %lf",x,y,power(x,y));	
	return 0;
} 
