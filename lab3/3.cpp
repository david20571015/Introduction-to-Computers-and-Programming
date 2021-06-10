#include<stdio.h>

int main(void){
	int n,k;
	double c;
	scanf("%d%d",&n,&k);
	c=1;
	k=(k<=n/2)?k:n-k;
	for(int i=1;i<=k;i++){
		c*=n+1-i;
		c/=i;
	}
	
	printf("%.0lf",c);
	
	return 0;
}
