#include <stdio.h> 

int main() {
	int num,digit[5],sum,d;
	scanf("%d",&num);
	d=num;
	
	for(int a=0;a<5;a++){
		digit[a]=d%10;
		sum+=digit[a];
		d/=10;
	}
	
	printf("a.sum=%d\n",sum);
	printf("b.%d",num+11111);	
		
	return 0;
}
