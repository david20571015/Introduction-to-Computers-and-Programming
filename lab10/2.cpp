#include<stdio.h>

bool isHamming(int n){
	bool f=0;
	if(n==1)
		return 1;
		
	if(n%5==0)
		f+=isHamming(n/5);
	if(n%3==0)
		f+=isHamming(n/3);
	if(n%2==0)
		f+=isHamming(n/2);
					
	return f;	
}

int print(int k){
	int count=0,i=1;
	while(count<k){
		count+=isHamming(i);
		i++;
	}
	return i-1;
}

int main(void){
	int k;
	do{
		scanf("%d",&k);
		printf("%d\n\n",print(k));
	}
	while(k);
	
	return 0;	
}
