#include <stdio.h> 

int main() {
	
	double f,c;
	
	printf("Program to convert Fahrenheit to Celsius.\n");
	printf("Fahrenheit temperature? ");
	scanf("%lf",&f);
	c=(f-32)*5/9;
	printf("Celsius equivalent: %lf",c);
	
	
	return 0;
}
