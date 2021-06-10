#include<stdio.h>

int main(void){
	int m;
	
	while(scanf("%d",&m)){
		if(m<11){
			printf("error 11<=m\n");
			continue;
		}
		
		bool f1=0,f2=0;		
		int n=m;
		
		while(f1==0||f2==0){
			f1=1;
			f2=1;
			int i;
				
			i=2;	
			while(f1==1&&(i+1)!=n/2){
				if(n%i==0)
					f1=0;
				i++;
			}
			
			i=2;
			while(f1==1&&f2==1&&(i+1)!=(n/2-3)){
				if((n-6)%i==0)
					f2=0;
				i++;
			}
		
			n--;
		}
				
		printf("(%d,%d)\n\n",n-5,n+1);	
	}
	
	return 0;
}

