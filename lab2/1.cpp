#include<stdio.h>

int main(void)
{
	int r;
	float area;
	const double PI=3.14159;
	double v;
	int x,y;

	printf("Please input the radius:");
	scanf("%d",&r);
	area=PI*r*r;
	printf("The area of circle is %f\n\n",area);

	printf("Please input a fraction number:");
	scanf("%lf",&v);	
	printf("The decimal part of float number is %d\n", (int)v);
	printf("The fraction part of float number is %lf\n\n",v-(int)v);

	printf("What's the difference between -1>>2 and -1/4 ??\n");
	printf("-1>>2 = %d and -1/4 = %d\n\n",-1>>2,-1/4);

	printf("Please input two integer x and y: ");
	scanf("%d%d",&x,&y);
	printf("\"x\" / \"y\" = %d ..... %d",x/y,x%y);
 
	return 0;
}
