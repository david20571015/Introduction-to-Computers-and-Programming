#include<stdio.h>

int main(void){
	double a,b;
	
	printf("Input: ");
	scanf("%lf%lf",&a,&b);
	
	printf("\n123456789012345678901234567890123456789012345678901234567890\n");
	
	printf("%10.5lf = %-12.2lf + %016.10lf + %010.5lf\n",a,(int)(a*100)/100.0,(int)(a*10000)%100/10000.0,(int)(a*100000)%10/100000.0);
	printf("%010.1lf + %12.5lf = %-16.3lf\n",a,b,a+b);
	printf("%010.6lf * %-012.10lf = %016.7lf\n",a,b,a*b);
	printf("%-10.3lf / %012.3lf = %-16.5lf",a,b,a/b);
	
	
	return 0;
}
