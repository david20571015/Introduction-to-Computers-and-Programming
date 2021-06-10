#include<stdio.h>

void order(int *n1, int *n2){
	int t;
	if(*n1>*n2){
		t=*n1;
		*n1=*n2;
		*n2=t;
	}
}

int main(void){
	int a,b;
	scanf("%d %d",&a,&b);
	order(&a,&b);
	printf("n1 = %d\nn2 = %d",a,b);	
	return 0;
}
