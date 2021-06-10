#include <stdio.h>
#include <conio.h>
#include <conio2.h>
#include <stdlib.h>
#include "Lab11_20181225_3_maze.h"

int Sy=1, Sx=1; // Start Position
int Ey=23, Ex=78; // End Position
int success=0; // Flag for record if find the end position sucessfully
int sp=0, ry[1000], rx[1000]; // Record Path Position

void showmap(void){
	for(int i=0;i<80;i++){
		for(int j=0;j<25;j++){
			gotoxy(i,j);
			if(MAP[j][i]==2){
				textbackground(WHITE);
				printf(" ");
			}
			else if(MAP[j][i]==0){
				textbackground(BLACK);
				printf(" ");
			}
		}	
	}
}

void trace(int map[25][80],int y,int x){
	map[y][x]=1;
	ry[sp]=y;
	rx[sp]=x;
	sp++;
	if(y==Ey&&x==Ex){
		for(int k=0;k<sp;k++){
			gotoxy(rx[k],ry[k]);
			textbackground(LIGHTRED);
			if(ry[k]==Sy&&rx[k]==Sx){
				textbackground(LIGHTBLUE);
				printf("S");
				continue;
			}
			if(ry[k]==Ey&&rx[k]==Ex){
				textbackground(LIGHTGREEN);
				printf("E");
				continue;
			}
			printf(" ");
			_sleep(150);
		}
 	success = 1;
	}
	else{
	if(MAP[y+1][x]==0)
		trace(map,y+1,x);
	if(MAP[y-1][x]==0)
		trace(map,y-1,x);
	if(MAP[y][x+1]==0)
		trace(map,y,x+1);
	if(MAP[y][x-1]==0)
		trace(map,y,x-1);
	}
	sp--;
	map[y][x]=0;
}

int main(void){
	showmap();
	getch();
	trace(MAP,Sy,Sx);
 	if (success == 0)
 	printf("No Path!!!\n");
	getch();
 	return 0;
}


