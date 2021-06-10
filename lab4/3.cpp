#include<stdio.h>

int main(void){
	int n,space,l;
	printf("n = ");
	scanf("%d",&n);
	int r=1;
	
	while(r<=n){ 
		for(int i=0;i<2*(n-r)+4;i++)
			printf(" ");
		printf("1");
		for(int i=1;i<r;i++)
			printf("   1");
		printf("\n");
		
		for(int i=0;i<2*(n-r)+4;i++)
			printf(" ");
		printf("-");
		for(int i=1;i<r;i++)
			printf("   -");
		printf("\n");
			
		for(int i=0;i<2*(n-r)+1;i++)
			printf(" ");
			
		for(int c=1;c<=r;c++){
			l=r;
			for(int i=(r-c+1);i<=r-1;i++)
				l*=i;
			for(int i=1;i<=c-1;i++)
				l/=i;
			printf("%4d",l);			
		}
		
		printf("\n");
		r++; 
	}
		
	return 0;
}
