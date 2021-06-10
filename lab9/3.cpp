#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}

void add(int *espresso, int *milk, int *chocolate,int *froth, int supply_espresso, int supply_milk,int supply_chocolate, int supply_froth){
	*espresso+=supply_espresso;
	*milk+=supply_milk;
	*chocolate+=supply_chocolate;
	*froth+=supply_froth;
}

bool make(int *espresso, int *milk, int *chocolate, int *froth, int r0, int r1, int r2, int r3,int *output){
	int gcd_of_r;
	gcd_of_r=gcd(gcd(gcd(r0,r1),r2),r3);
	r0/=gcd_of_r;
	r1/=gcd_of_r;
	r2/=gcd_of_r;
	r3/=gcd_of_r;
	
	bool f=0;
	*output=0;
	
	while((*espresso>=r0)&&(*milk>=r1)&&(*chocolate>=r2)&&(*froth>=r3)){
		f=1;
		*espresso-=r0;
		*milk-=r1;
		*chocolate-=r2;
		*froth-=r3;
		*output+=(r0+r1+r2+r3);
	}
	return f;
}

void show(int espresso, int milk, int chocolate, int froth){
	int todo,kind,vol,f=0;
	char conti='y';	
	
	do{	
		system("cls");
		printf("Espresso:%d\n",espresso);
		printf("Milk:%d\n",milk);
		printf("Chocolate:%d\n",chocolate);
		printf("Froth:%d\n",froth);
		printf("1. Add ingredient\n2. Make coffee\n");
		scanf("%d",&todo);
		
		switch(todo){
			case 1:{
				int i0,i1,i2,i3;
				printf("Input increased volume(in order of espresso,milk,chocolate,froth)\n");
				scanf("%d %d %d %d",&i0,&i1,&i2,&i3);
				add(&espresso,&milk,&chocolate,&froth,i0,i1,i2,i3);
				break;
			}
			case 2:{
				printf("1.Latte\n");
				printf("2.Cappuccino\n");
				printf("3.Mocha\n");
				printf("4.User define\n");
				scanf("%d",&kind);
				switch(kind){
					case 1:
						make(&espresso,&milk,&chocolate,&froth,3,3,0,4,&vol)?printf("Congratulationa! You make %d ml Latte\n",vol):printf("Ingredients are not enough\n");
						break;
					case 2:
						make(&espresso,&milk,&chocolate,&froth,7,3,0,5,&vol)?printf("Congratulationa! You make %d ml Cappuccino\n",vol):printf("Ingredients are not enough\n");
						break;
					case 3:
						make(&espresso,&milk,&chocolate,&froth,3,1,1,0,&vol)?printf("Congratulationa! You make %d ml Mocha\n",vol):printf("Ingredients are not enough\n");
						break;
					case 4:
						int r0,r1,r2,r3;
						printf("Input ratio(in order of espresso,milk,chocolate,froth)\n");
						scanf("%d %d %d %d",&r0,&r1,&r2,&r3);
						make(&espresso,&milk,&chocolate,&froth,r0,r1,r2,r3,&vol)?printf("Congratulationa! You make %d ml User define coffee\n",vol):printf("Ingredients are not enough\n");
						break;
				}
				break;
			}
		}
		
		printf("Continue?(y/n)");
		scanf(" %c",&conti);
	}while(conti=='y');
}

int main(void){
	int espresso=0,milk=0,chocolate=0,froth=0;
	show(espresso,milk,chocolate,froth);	
	return 0;
}
