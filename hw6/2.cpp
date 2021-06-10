#include<stdio.h>

int main(void){
	int a,b,c,n;
	scanf("%d%d%d",&a,&b,&c);
	
	while((a>b)||(b>c)){
		if(a>b){
			n=a;
			a=b;
			b=n;
		}
		if(b>c){
			n=b;
			b=c;
			c=n;
		}
	}	
	
	printf("%d %d %d",a,b,c);
	
	return 0;
} 
