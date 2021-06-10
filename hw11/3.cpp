#include<stdio.h>

void show(double avg,int above,int below,int inter[]){
	printf("*****SCORE REPORT*****\n");
	printf("AVERAGE = %lf\n",avg);
	printf("ABOVE AVG = %d\n",above);
	printf("BELOW AVG = %d\n\n",below);
	
	for(int i=0;i<10;i++){
		if(i<9)
			printf("%-2d ~ %-3d: ",i*10,i*10+9);
		if(i==9)
			printf("90 ~ 100: ");
		for(int j=0;j<inter[i];j++)
			printf("*");
		printf("\n");
	}
}

int main(void){
	int score[100],interval[10]={0};
	int count=0,above=0,below=0;
	double sum=0;
	
	do{
		scanf("%d",&score[count]);
		count++;
	}
	while(score[count-1]>=0);
	
	for(int i=0;i<count-1;i++){
		sum+=score[i];
		if(score[i]==100)
			interval[9]++;
		interval[score[i]/10]++;
	}
	
	sum/=count-1;
	
	for(int i=0;i<count-1;i++){
		if(score[i]>sum)
			above++;
		if(score[i]<sum)
			below++;
	}
	
	show(sum,above,below,interval);
		
	return 0;
}
