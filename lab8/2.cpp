#include<stdio.h>

bool isBaseB(long long int input, int B){
	while(input){
		if(input%10>=B)
			return 0;
		input/=10;
	}
	return 1;
}

long long int B2dec(long long int num,int B){
	long long int base=1,ans=0;
	while(num){
		ans+=((num%10)*base);
		num/=10;
		base*=B;
	}
	return ans;
}

int main(void){
	long long int input;
	int b;	
	while(scanf("%lld %d",&input,&b)){
		if(isBaseB(input,b))
			printf("%lld\n",B2dec(input,b));
		else
			printf("%lld is not %d base\n",input,b);
	}	
	return 0;
}
