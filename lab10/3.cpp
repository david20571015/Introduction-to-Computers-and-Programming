#include<stdio.h>
#include<conio2.h>
#define MAX 5

void drawrect(int x1,int y1,int x2,int y2){
	textbackground(WHITE);
	int x,y;
	for(x=x1;x<=x2;x++)
		for(y=y1;y<=y2;y++){
			gotoxy(x,y);
			printf(" ");
		}
}

void drawsierpinski(int n,int x1,int y1,int x2,int y2){
	drawrect((x1+x2)/2,y1,x2-1,(y1+y2)/2-1);
	if(n<MAX){
		drawsierpinski(n+1,x1,y1,(x1+x2)/2,(y1+y2)/2);
		drawsierpinski(n+1,x1,(y1+y2)/2,(x1+x2)/2,y2);
		drawsierpinski(n+1,(x1+x2)/2,(y1+y2)/2,x2,y2);	
	}
}

int main(void){
	textbackground(0);
	clrscr();
	drawsierpinski(1,1,1,80,24);
	return 0;
}
