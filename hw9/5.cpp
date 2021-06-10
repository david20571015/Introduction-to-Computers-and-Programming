#include<stdio.h>

void change(int *n1, int *n2, int *n3, int money){
	*n1=money/50;
	money%=50;
	*n2=money/20;
	money%=20;
	*n3=money/10;
}

int main(void){
	int money,n1,n2,n3;
	scanf("%d",&money);
	change(&n1,&n2,&n3,money);
	printf("50 : %d\n20 : %d\n10 : %d",n1,n2,n3);
	return 0;
}
