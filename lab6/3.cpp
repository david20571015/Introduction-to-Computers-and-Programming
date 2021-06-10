#include<stdio.h>

int main(void){
	int n1,n2,n3; 
	
	while(scanf("%d%d%d",&n1,&n2,&n3)){
		int lcm=1;
		
		while(lcm%n1||lcm%n2||lcm%n3)
			lcm++;
			
		printf("lcm of %d, %d, %d = %d\n\n",n1,n2,n3,lcm);
	}
	
	return 0;
}
