#include<stdio.h>
#include<math.h>

void separate(double num, char *signp, int *wholep, double *fracp){
	if(num>0)
		*signp='+';
	else if(num==0)
		*signp='0';
	else
		*signp='-';
	
	*wholep=(int)(abs(num));
	
	*fracp=fabs(num)-*wholep;
}

int main(void){
	int whole;
	double num,frac;
	char sign;
	scanf("%lf",&num);
	separate(num,&sign,&whole,&frac);
	printf("sign : %c\nwhole number magnitude : %d\nfractional part : %lf",sign,whole,frac);	
	return 0;
}
