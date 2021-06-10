#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int random(int a,int b){
	return (int)((double)rand()/(RAND_MAX+1.0)*(b-a+1.0)+1);
}

int main(void){
	double a,b,c,d,e,f;
	const int n=6000;
	srand(time(NULL));
	
	for(int i=0;i<n;i++){
		switch(random(1,6)){
			case 1:
				a++;
				break;
			case 2:
				b++;
				break;
			case 3:
				c++;
				break;
			case 4:
				d++;
				break;
			case 5:
				e++;
				break;
			case 6:
				f++;
				break;
		}
	}
	
	printf("1 : %lf\n2 : %lf\n3 : %lf\n4 : %lf\n5 : %lf\n6 : %lf\n",a/n,b/n,c/n,d/n,e/n,f/n);
	
	return 0;
} 
