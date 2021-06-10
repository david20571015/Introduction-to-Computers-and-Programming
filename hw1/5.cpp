#include <stdio.h> 
#include <cmath> 

int main() {
	int x,ans;
	printf("x= ");
	scanf("%d",&x);
	ans=pow(x,3)+5*pow(x,2)+10*x+15;
	printf("f(%d)=%d",x,ans);
	return 0;
}

