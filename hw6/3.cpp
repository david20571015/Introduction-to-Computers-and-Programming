#include<stdio.h>

int main(void){
	int x,y;
	scanf("(%d,%d)",&x,&y);
	
	if(x==0&&y==0)
		printf("origin");
	else if(x==0)
		printf("y-axis");
	else if(y==0)
		printf("x-axis");
	else if(x>0&&y>0)
		printf("first quadrant");	
	else if(x<0&&y>0)
		printf("second quadrant");
	else if(x<0&&y<0)
		printf("third quadrant");
	else if(x>0&&y<0)
		printf("foutth quadrant");	
	
	return 0;
}
