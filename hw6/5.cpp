#include<stdio.h>

int main(void){
	int option,n,flag;
	double f;
	scanf("%d",&n);
	printf("1.Factorial of a number\n2.Prime or not\n3.Odd or even\n4.Exit\n\n");
		
	do{
		scanf("%d",&option);
		switch(option){
			case 1:
				f=1;
				for(int i=1;i<=n;i++)
					f*=i;
				printf("%d! = %.0lf\n\n",n,f);
				break;
			
			case 2:
				flag=1;
				for(int i=2;i*i<=n;i++)
					if(n%i==0)
						flag=0;
				(n==1)?flag=0:NULL; 
				(flag)?	printf("%d is prime.\n\n",n):printf("%d is not prime.\n\n",n);
				break;
			
			case 3:
				(n&1)?printf("%d is odd.\n\n",n):printf("%d is even.\n\n",n);
				break;
			
			case 4:
				printf("Exit\n");
				break;
		}
	}
	while(option!=4);
	
	return 0;
}
