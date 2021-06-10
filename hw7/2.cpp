#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int random(int a,int b){
	return (int)((double)rand()/(RAND_MAX+1.0)*(b-a+1.0)+1);
}

int main(void){
	int mostlikely,max;
	double a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0;
	const int n=10000;
	srand(time(NULL));
	
	for(int l=0;l<n;l++){
		switch(random(1,6)+random(1,6)){
			case 2:
				a++;
				break;
			case 3:
				b++;
				break;
			case 4:
				c++;
				break;
			case 5:
				d++;
				break;
			case 6:
				e++;
				break;
			case 7:
				f++;
				break;
			case 8: 
				g++;
				break;
			case 9:
				h++;
				break;
			case 10:
				i++;
				break;
			case 11:
				j++;
				break;
			case 12:
				k++;
				break;
		}
	}
	
	printf("2  : %lf\n",a/n);
	printf("3  : %lf\n",b/n);
	printf("4  : %lf\n",c/n);
	printf("5  : %lf\n",d/n);
	printf("6  : %lf\n",e/n);
	printf("7  : %lf\n",f/n);
	printf("8  : %lf\n",g/n);
	printf("9  : %lf\n",h/n);
	printf("10 : %lf\n",i/n);
	printf("11 : %lf\n",j/n);
	printf("12 : %lf\n",k/n);
	
	
	if(a>=max){
		max=a;
		mostlikely=2;
	}
	if(b>=max){
		max=b;
		mostlikely=3;
	}
	if(c>=max){
		max=c;
		mostlikely=4;
	}		
	if(d>=max){
		max=d;
		mostlikely=5;
	}		
	if(e>=max){
		max=e;
		mostlikely=6;
	}		
	if(f>=max){
		max=f;
		mostlikely=7;	
	}	
	if(g>=max){
		max=g;
		mostlikely=8;	
	}	
	if(h>=max){
		max=h;
		mostlikely=9;	
	}	
	if(i>=max){
		max=i;
		mostlikely=10;	
	}	
	if(j>=max){
		max=j;
		mostlikely=11;	
	}	
	if(k>=max){
		max=k;
		mostlikely=12;	
	}
				
	printf("%d is most likely to thrown.",mostlikely);
			
	return 0;
} 
