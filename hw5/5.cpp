#include<stdio.h>

int main(void){
	int T,O,G,D;
	
	for(T=0;T<=9;T++){
		for(O=0;O<=9;O++){
			for(G=0;G<=9;G++){
				for(D=0;D<=9;D++){
					if((T*400+O*44==G*1000+O*110+D)&&(T!=O)&&(O!=G)&&(G!=D)&&(D!=T)&&(O!=D)&&(T!=G)&&(G!=0)) 
						printf("T = %d, O = %d, G = %d, D = %d\n",T,O,G,D);
				}
			}
		}
	}	
	
	return 0;
} 
