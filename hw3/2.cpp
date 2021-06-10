#include <stdio.h>

int main(void) {
	int ascii=0;
	
	printf("=====================================\n");
	for(int i=0;i<32;i++){
		for(int j=0;j<4;j++){
			printf("| %3d ",ascii);
			if(ascii>=32&&ascii<=126)
				printf("%c  ",ascii);
			else
				printf("   ");
			ascii++;
		}
		printf("|\n");		
	}
	printf("=====================================");	
	
	return 0;
}
