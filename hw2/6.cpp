#include<stdio.h>

int main(){
	double a,b,c,d,e,f,x,y;
	printf("Input data(six real number):");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
	
	x=(c*e-b*f)/(a*e-b*d);
	y=(a*f-c*d)/(a*e-b*d);
	
	printf("a=%lf\n",a);
	printf("b=%lf\n",b);
	printf("c=%lf\n",c);
	printf("d=%lf\n",d);
	printf("e=%lf\n",e);			
	printf("f=%lf\n",f);
	
	printf("x=%lf\n",x);
	printf("y=%lf",y);		
	
	return 0;
}
