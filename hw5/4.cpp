#include<stdio.h>

int main(void){
	int  binary,decimal,pro=1;
	
	scanf("%d",&binary);
	
	while(binary!=0){
		decimal+=(binary%10)*pro;
		binary/=10;
		pro*=2;
	}
	
	printf("%d",decimal);
	
	return 0;
}
