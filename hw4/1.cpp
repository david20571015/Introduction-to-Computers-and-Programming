#include<stdio.h>

int main(void){
	int x,n;
	double s1=0,s2=0;
	
	printf("x=");
	scanf("%d",&x);
	
	for(int i=1;i<=x;i++){
		n=1;
		for(int j=0;j<i;j++)
			n*=i;
		s1+=n;
	}
	
	printf("(a)%.0lf\n",s1);
	
	for(int i=1;i<=11;i+=4){
		n=1;
		for(int j=0;j<i;j++)
			n*=x;
		s2+=1.0/n;
		n=1;
		for(int j=0;j<i+2;j++)
			n*=x;
		s2-=1.0/n;
	}
	
	printf("(b)%lf",s2);
	
	return 0;
} 
