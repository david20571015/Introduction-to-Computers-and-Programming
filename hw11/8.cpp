#include<stdio.h>
#include<math.h>

#define f(x) pow(sin(x/10.0*M_PI),2.0)

int main(void){
	double data[25],delta=10.0/24.0,ymax=-1,ymin=1;
	double j=0;
	for(int i=0;i<=25;i++){
		if(f(j)>ymax)
			ymax=f(j);
		if(f(j)<ymin)
			ymin=f(j);
		data[i]=f(j);
		j+=delta;
		data[i]*=80;
	}
	
	double rx=10-0,ry=ymax-ymin;
	
	for(int i=0;i<25;i++){
		int k;
		for(k=0;k<data[i];k++)
			printf(" ");
		printf("*");
		k++;
		for(;k<80;k++)
			printf(" ");
		printf("\n");
	}
	
	return 0;
}
