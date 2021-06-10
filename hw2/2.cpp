#include<stdio.h>

int main(){
	int c1,c2,c7;
	float c3,c4,c8;
	double c5,c6;
	
	printf("please input <int> and <int> ");
	scanf("%d%d",&c1,&c2);
	printf("%d+%d=%d\n",c1,c2,c1+c2);
	printf("%d-%d=%d\n",c1,c2,c1-c2);
	printf("%d*%d=%d\n",c1,c2,c1*c2);
	printf("%d/%d=%d\n\n",c1,c2,c1/c2);
	
	printf("please input <float> and <float> ");
	scanf("%f%f",&c3,&c4);
	printf("%f+%f=%f\n",c3,c4,c3+c4);
	printf("%f-%f=%f\n",c3,c4,c3-c4);
	printf("%f*%f=%f\n",c3,c4,c3*c4);
	printf("%f/%f=%f\n\n",c3,c4,c3/c4);
	
	printf("please input <double> and <double> ");	
	scanf("%lf%lf",&c5,&c6);
	printf("%lf+%lf=%lf\n",c5,c6,c5+c6);
	printf("%lf-%lf=%lf\n",c5,c6,c5-c6);
	printf("%lf*%lf=%lf\n",c5,c6,c5*c6);
	printf("%lf/%lf=%lf\n\n",c5,c6,c5/c6);
	
	printf("please input <int> and <float> ");	
	scanf("%d%f",&c7,&c8);
	printf("%d+%f=%f\n",c7,c8,c7+c8);
	printf("%d-%f=%f\n",c7,c8,c7-c8);
	printf("%d*%f=%f\n",c7,c8,c7*c8);
	printf("%d/%f=%f\n\n",c7,c8,c7/c8);
				
	return 0;
}
