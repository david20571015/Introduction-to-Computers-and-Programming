#include<stdio.h>
#include<stdlib.h>

int main(void){
	char change,t,conti;
	int n1,n2;
	int c,r;
	printf("Please input the number of columns :");
	scanf("%d",&c);
	printf("Please input the number of rows :");
	scanf("%d",&r);
	char msg[c*r-1],code[c][r];
	printf("Please input the string :");
	scanf(" %[^\n]",&msg);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
			code[j][i]=msg[i*c+j];
	}
	
	do{
		system("cls");
		printf("interchange (c or r) (num) and (num) : ");
		scanf(" %c %d %d",&change,&n1,&n2);
		n1--;
		n2--;
		switch(change){
			case 'c':
				for(int i=0;i<r;i++){
					t=code[n1][i];
					code[n1][i]=code[n2][i];
					code[n2][i]=t;
				}
				break;
				
			case 'r':
				for(int i=0;i<c;i++){
					t=code[i][n1];
					code[i][n1]=code[i][n2];
					code[i][n2]=t;
				}
				break;
		}
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++)
				printf("%c",code[j][i]);
			printf("\n");
		}
		printf("continue?(y/n)");
		scanf(" %c",&conti);
	}
	while(conti=='y');	
		
	return 0;
} 
