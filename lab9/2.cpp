#include<stdio.h>

void encoder(int *x, int n, int bias){
	int digit=0,d=1,tem;
	
	while(*x/d){
		d*=10;
		digit++;
	}
	
	n%=digit;
	
	for(int i=0;i<n;i++){
		tem=*x%10;
		*x/=10;
		*x+=tem*d/10;
	}
		
	printf("%d\n",(*x+bias)%d);
}

int main(void){
	int num,shift,add;	
	while(scanf("%d %d %d",&num,&shift,&add)){
		encoder(&num,shift,add);
	}	
	return 0;
}
