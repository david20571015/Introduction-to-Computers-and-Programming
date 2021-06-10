#include <stdio.h>

int main()
{
	int x, y, sum=0; // input: x,y ; output: sum
	 // machine input: mx,my ; machine output: out
	unsigned char mx, my, out;
	bool ca=0; // carry
	
	printf("Input: ");
	scanf("%d %d", &x, &y);	
	printf("%d + %d = ", x, y);
	
	mx = x&0x7F;
	my = y&0x7F;
	out = mx + my + ca;
	ca = out>>7;
	sum |= out&0x7F;
	
	x>>=7;
	y>>=7;

	mx = x&0x7F;
	my = y&0x7F;
	out = mx + my + ca;
	ca = out>>7;
	sum |= (out&0x7F)<<7;
	
	x>>=7;
	y>>=7;

	mx = x&0x7F;
	my = y&0x7F;
	out = mx + my + ca;
	ca = out>>7;
	sum |= (out&0x7F)<<14;
	
	x>>=7;
	y>>=7;
	
	mx = x&0x7F;
	my = y&0x7F;
	out = mx + my + ca;
	ca = out>>7;
	sum |= (out&0x7F)<<21;
	
	x>>=7;
	y>>=7;	
	
	mx = x&0x7F;
	my = y&0x7F;
	out = mx + my + ca;
	ca = out>>7;
	sum |= (out&0x7F)<<28;
	

	
	printf("%d\n", sum);

	return 0;
}
