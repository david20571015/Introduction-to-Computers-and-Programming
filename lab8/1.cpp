#include<stdio.h>

int GCD(int a, int b){
	if(b==0)
		return a;
	return GCD(b,a%b);
}

int LCD(int a, int b){
	return a*b/GCD(a,b);
}

int main(void){
	int n,ans;
	scanf("%d",&ans);	
	while(scanf("%d",&n)){
		ans=LCD(n,ans);
	}		
	printf("%d",ans);	
	return 0;
}
