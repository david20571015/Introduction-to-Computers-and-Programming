#include<stdio.h>

int begin(int);
bool leap(int);
int day_of_month(int, bool);
int name_of_month(int);

int main(void){
	int year;
	scanf("%d",&year);
	int shift=begin(year);
	printf("\n");
	
	for(int i=1;i<=12;i++){
		name_of_month(i);
		printf(" Sun Mon Tue Wed Thu Fri Sat\n");
		
		for(int j=0;j<shift;j++)
			printf("    ");
			
		for(int j=1;j<=day_of_month(i,leap(year));j++){
			printf("%4d",j);
			(((j+shift)%7)&&(j!=day_of_month(i,leap(year))))?NULL:printf("\n");		
		}
		
		shift+=day_of_month(i,leap(year));
		shift%=7;
		printf("\n");
	}		
	return 0;
} 

int begin(int year){
	return (year+(int)((year-1.)/4)-(int)((year-1.)/100)+(int)((year-1.)/400))%7;	
}

bool leap(int year){
	if(year%4==0&&year%100!=0)
		return 1;
	if(year%400==0)
		return 1;
	return 0;
}

int day_of_month(int month,bool leap){
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;		
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return 28+leap;
	}
}

int name_of_month(int month){
	switch(month){
		case 1:
			printf("----------January-----------\n");
			break;
		case 2:
			printf("----------February----------\n");
			break;
		case 3:
			printf("----------March-------------\n");
			break;
		case 4:
			printf("----------April-------------\n");
			break;
		case 5:
			printf("----------May---------------\n");
			break;
		case 6:
			printf("----------June--------------\n");
			break;
		case 7:
			printf("----------July--------------\n");
			break;
		case 8:
			printf("----------August------------\n");
			break;
		case 9:
			printf("----------September---------\n");
			break;
		case 10:
			printf("----------October-----------\n");
			break;
		case 11:
			printf("----------November----------\n");
			break;
		case 12:
			printf("----------December----------\n");
			break;
	}
}
