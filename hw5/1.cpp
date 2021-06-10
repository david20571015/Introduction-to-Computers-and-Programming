#include<stdio.h> 

int main(void){
	int pro=1;
	double e=1;
	
	for(int i=2;1.0/pro>=1e-6;i++){
		e+=1.0/pro;
		pro*=i;
	}
	
	printf("(a)%lf\n",e);
	
	pro=1;
	e=1;
	
	for(int i=2;(1.0/pro-1.0/(pro*i))>=0.001;i++){
		e+=1.0/pro;
		pro*=i;
	}
	
	printf("(b)%lf",e);
	
	return 0;
}
