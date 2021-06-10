#include<stdio.h>

int main(void){
	int n;
	float axis,di,dj;
	scanf("%d",&n);
	axis=(n-1)/2.0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			di=(i-axis>=0)?(i-axis):(axis-i);
			dj=(j-axis>=0)?(j-axis):(axis-j);
			(di+dj>axis+0.5)?(printf("*")):(printf(" "));
		}
		printf("\n");
	}
	
	
	return 0;
} 
