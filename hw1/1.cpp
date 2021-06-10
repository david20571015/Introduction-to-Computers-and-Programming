#include <stdio.h> 

int main() {
	double num=0,sum=0;
	
	printf("input five floating-point numbers.\n");
	
	scanf("%lf",&num);
	sum+=num;
	printf("%lf\n",num);
	num=0;
	
	scanf("%lf",&num);
	sum+=num;
	printf("%lf\n",num);
	num=0;
	
	scanf("%lf",&num);
	sum+=num;
	printf("%lf\n",num);
	num=0;
	
	scanf("%lf",&num);
	sum+=num;
	printf("%lf\n",num);
	num=0;
	
	scanf("%lf",&num);
	sum+=num;
	printf("%lf\n",num);
	num=0;
	
	printf("sum=%lf\n",sum);
	printf("average=%lf\n",sum/5);
	
	return 0;
}
