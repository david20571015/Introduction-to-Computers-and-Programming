#include<stdio.h>

int main(){
	int n,a,b,c,d;
	printf("Input: ");
	scanf("%d",&n);
	
	a=n%1000;
	b=(n/1000)%1000;
	c=n/1000000;
	d=a/100;
	
	printf("Output:\n");
	printf("The third-rightmost digit of the input data is %d\n",d);	
	printf("The input data with commas between every third digit is %d,%d,%d\n",c,b,a);	
	
	return 0;
}
