#include<stdio.h>

int main(void){
	int m1[3][4],m2[4][3],m3[3][3]={0};
	printf("Please input a 3*4 matrix\n");
	for(int i=0;i<12;i++)
		scanf("%d",&m1[i/4][i%4]);
			
	printf("Please input a 4*3 matrix\n");
	for(int i=0;i<12;i++)
		scanf("%d",&m2[i/3][i%3]);
		
	printf("\n\n");
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<4;k++)
				m3[i][j]+=m1[i][k]*m2[k][j];
			printf("%-3d",m3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
