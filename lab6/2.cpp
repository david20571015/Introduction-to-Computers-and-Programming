#include<stdio.h>

int main(void){
	int n1,n2,n3,tmp,input,n=1;
	
	for(int i=0;i<31;i++)
		n*=2;
	n--;
	
	n1=n-2;
	n2=n-1;
	n3=n;
	
	while(scanf("%d",&input)){
		if(input<n1){
			n3=n2;
			n2=n1;
			n1=input;
		}
		else if(input<n2){
			n3=n2;
			n2=input;
		}
		else if(input<n3)
			n3=input;
	}
	
	printf("the minimum three data are %d %d %d .",n1,n2,n3);
	
	
	return 0;
}
