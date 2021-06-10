#include<stdio.h>

int main(void){
	int n1,n2;
	char oper;	
	scanf("%d %c %d",&n1,&oper,&n2);
	
	switch(oper){
		case '+':
			printf("%d %c %d = %d\n",n1,oper,n2,n1+n2);
			break;
		
		case '-':
			printf("%d %c %d = %d\n",n1,oper,n2,n1-n2);
			break;
		
		case '*':
			printf("%d %c %d = %d\n",n1,oper,n2,n1*n2);
			break;
		
		case '/':
			(n2==0)?printf("divisor can't equal to zero.\n"):printf("%d %c %d = %d\n",n1,oper,n2,n1/n2);
			break;	
	}	
		
	return 0;
}
