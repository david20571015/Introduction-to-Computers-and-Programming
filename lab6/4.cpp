#include<stdio.h>

int main(void){
	int grade,a=0,b=0,c=0,d=0;
	char f='y';
	
	while(f=='y'){
		scanf("%d",&grade);
				
		switch(grade/10){
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				d++;
				break;
				
			case 6:
				c++;
				break;
				
			case 7:
				b++;
				break;
			
			case 8:
			case 9:
			case 10:
				a++;
				break;						
		}
		
		if(grade<0&&grade>-10)
			d--;			
		
		printf("continue(y/n)? ");
		scanf(" %c",&f);			
	}
	
	printf("\n\nA:%d B:%d C:%d D:%d",a,b,c,d);
	
	return 0;
}
