#include<stdio.h>

int main(){
	int a[32],b[16],c[8],d[4],e[2],x,y,s=1;
	
	for(int i=0;i<32;i++)
		scanf("%d",&a[i]);

	x=0;
	y=0;
	for(int i=0;i<16;i++){
		x+=a[i];
		y+=a[16+i];
	}	
	if(x<y){
		for(int i=0;i<16;i++)
			b[i]=a[i];
	}
	else{
		for(int i=0;i<16;i++)
			b[i]=a[16+i];
		s+=16;
	}
		
	x=0;
	y=0;
	for(int i=0;i<8;i++){
		x+=b[i];
		y+=b[8+i];
	}	
	if(x<y){
		for(int i=0;i<8;i++)
			c[i]=b[i];
	}
	else{
		for(int i=0;i<8;i++)
			c[i]=b[8+i];
		s+=8;	
	}
				
	x=0;
	y=0;
	for(int i=0;i<4;i++){
		x+=c[i];
		y+=c[4+i];
	}	
	if(x<y){
		for(int i=0;i<4;i++)
			d[i]=c[i];
	}
	else{
		for(int i=0;i<4;i++)
			d[i]=c[4+i];	
		s+=4;
	}

	x=0;
	y=0;
	for(int i=0;i<2;i++){
		x+=d[i];
		y+=d[2+i];
	}	
	if(x<y){
		for(int i=0;i<2;i++)
			e[i]=d[i];
	}
	else{
		for(int i=0;i<2;i++)
			e[i]=d[2+i];	
		s+=2;
	}
	
	if(e[0]>e[1])
		s+=1;
					
	return 0;
} 
