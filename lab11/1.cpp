#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rfill1d(int *a,int r){
	int p;
	srand(time(NULL));
	for(int i=0;i<r;i++){
		p=rand()%r;
		if(a[p]=='\0')
			a[p]=i;
		else
			i--;
	}
}

void rfill2d(int *a,int r,int c){
	int p;
	srand(time(NULL));
	for(int i=0;i<r*c;i++){
		p=rand()%(r*c);
		if(a[p]=='\0')
			a[p]=i;
		else
			i--;
	}
}

void print1darray(int a[],int r){
	for(int i=0;i<r;i++)
		printf("%-2d",a[i]);
}

void print2darray(int a[],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
			printf("%-3d",a[i*c+j]);
		printf("\n");
	}
}

void sort1d(int *a,int r){
	int t;
	for(int i=0;i<r-1;i++){
		for(int j=i+1;j<r;j++){
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}

int main(void){
	int a1[10]={'\0'},a2[20]={'\0'};
	
	printf("\nfill1D:\n");
	rfill1d(a1,10);
	print1darray(a1,10);
	
	printf("\nAfter sorting:\n");
	sort1d(a1,10);
	print1darray(a1,10);
	printf("\n");
	
	printf("\nfill2D:\n");
	rfill2d(a2,5,4);
	print2darray(a2,5,4);

	return 0;
}
