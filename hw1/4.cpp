#include <stdio.h> 

int main() {
	int second_in,h,m,s;
	
	scanf("%d",&second_in);
	
	h=second_in/3600;
	m=(second_in/60)-h*60;
	s=second_in%60;
	
	printf("%d hours, %d minutes, and %d seconds",h,m,s);	
	
	return 0;
}
