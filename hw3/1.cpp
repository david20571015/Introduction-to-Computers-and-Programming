#include<stdio.h>

int main(void) {
	int a,d=0,e,n;
	double b,c;
	
	printf("input n>10\n");	
	scanf("%d",&n);
	
	for(int i=20;i<=2*n;i+=2)
		a+=i;
	printf("(a)%d\n",a);
	
	for(double i=1;i<=101;i+=2)
		b+=(1/i);
	printf("(b)%lf\n",b);	
	
	int k=1;
	for(int i=1;i<=n;i++){
			k*=i;
			c+=(1./k);
	}		
	printf("(c)%lf\n",c);		
	
	for(int i=1;i<=n;i++)
		d+=i*(((i+1)%2==0)?1:-1);
	printf("(d)%d\n",d);	
		
	k=0;
	for(int i=1;i<=n;i++){
		k+=i;
		e+=k;
	}
	printf("(e)%d",e);	
		
	return 0;
}
