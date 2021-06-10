#include<stdio.h>

int a[50];

void way(int rest,int len,int count){
	if(len==1){
		a[count]=1;
		count++;
	}
	
	if(len==2){
		a[count]=2;
		count++;
	}
	
	if(rest==0){
		for(int i=0;i<count;i++)
			printf("%d",a[i]);
		printf("\n");
	}
	else{ 
		for(int i=1;i<=2;i++){
			if(rest-i>=0)
				way(rest-i,i,count);
		}
	}
}

int main(void){
	int n;
	printf("length of the road (len<=50) = ");
	scanf("%d",&n);
	way(n,0,0);	
	return 0;
}
