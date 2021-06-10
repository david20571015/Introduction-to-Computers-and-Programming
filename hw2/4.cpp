#include<stdio.h>
#define PI 3.14159

int main(){
	float d,c,a;
	d=6.75*2;
	c=d*PI;
	a=6.75*6.75*PI;
	
	printf("diameter=%10.5f\n",d);
	printf("circumference=%10.5f\n",c);	
	printf("area=%10.5f\n",a);
	
	return 0;	
	
}
