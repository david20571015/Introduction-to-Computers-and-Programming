#include<stdio.h>

int main(void){
	int input;
	
	printf("input: ");
	
	while(scanf("%d",&input)){
		int di,dj;
		int axis;
		axis=input-1;
		
		for(int i=0;i<input*2-1;i++){
			for(int j=0;j<input*2-1;j++){
				di=(i-axis>=0)?(i-axis):(axis-i);
				dj=(j-axis>=0)?(j-axis):(axis-j);				
				(di+dj>=axis)?(printf("%c ",'A'+axis-dj)):(printf("  "));		
			}
			
			printf("\n");
		}		
	
		printf("\n\ninput: ");	
	}
	
	return 0;
}
