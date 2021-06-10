#include <stdio.h> 

int main() {
	int fib1,fib2,fib3;
	scanf("%d%d",&fib1,&fib2);
	
	fib3=fib1+fib2;
	fib1=fib2+fib3;
	fib2=fib3+fib1;
	
	fib3=fib1+fib2;
	fib1=fib2+fib3;
	fib2=fib3+fib1;
	
	fib3=fib1+fib2;
	fib1=fib2+fib3;
	fib2=fib3+fib1;
	
	fib3=fib1+fib2;
	
	printf("fib1=%d\n",fib1);
	printf("fib2=%d\n",fib2);
	printf("fib3=%d\n",fib3);
	
	return 0;
}
