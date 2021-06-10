#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
	int position=0,t=0;
	double avg=0,r=0,l=0;
	const double n=1000;
	
	srand(time(NULL));
	
	for(int i=0;i<n;i++){
		position=0;
		t=0;
		while(-5<position&&position<4){
			position+=((rand()%2)*2-1);
			if(position==-2)
				position=-4;
			t++;
		}
		avg+=(double)t/n;
		(position==4)?(r++):(l++);
	}
	
	printf("(a) R4 = %lf\n    L5 = %lf\n\n",r/n,l/n);
	printf("(b) time average = %lf minute\n\n",avg);
	
	bool f=0;
	position=0,r=0,l=0;
	
	for(int i=0;i<n;i++){
		position=0;
		t=0;
		while(-5<position&&position<4){
			if(position==-1)
				f=1;
			position+=((rand()%2)*2-1);
			if(position==-2&&f==1)
				position=-4;
			t++;
			f=0;
		}
		(position==4)?(r++):(l++);
	}
	
	printf("(c) R4 = %lf\n    L5 = %lf\n\n",r/n,l/n);
	
	return 0;
} 
