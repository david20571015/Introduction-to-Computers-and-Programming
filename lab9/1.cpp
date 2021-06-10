#include<stdio.h>

void mul(int *a11,int *a12,int *a21,int *a22,int w11,int w12,int w21,int w22){
	int a=*a11,b=*a12,c=*a21,d=*a22;
	*a11=a*w11+b*w21;
	*a12=a*w12+b*w22;
	*a21=c*w11+d*w21;
	*a22=c*w12+d*w22;
}

int main(void){
	int n;
	while(scanf(" %d",&n)){
		int a11=1,a12=1,a21=1,a22=0;

		for(int i=0;i<n;i++){
			printf("%d ",a12);
			mul(&a11,&a12,&a21,&a22,1,1,1,0);
		}		
		printf("%d\n\n",a12);
	}
	return 0;
}
