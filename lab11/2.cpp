#include<stdio.h>
#include<math.h>

void decode(char code[],int l){
	char de[l][l];
	for(int i=0;i<l;i++){
		for(int j=0;j<l;j++){
			de[i][j]=code[i*l+j];
		}
	}
	for(int j=0;j<l;j++){
		for(int i=0;i<l;i++)
			printf("%c",de[i][j]);
	}
	printf("\n");
}

int main(void){
	int t;
	char tem,code[10000]={'\0'};
	scanf("%d",&t);
	scanf("%c",&tem);
	for(int i=0;i<t;i++){
		int count=0;
		for(int j=0;j<10000;j++){
			scanf("%c",&tem);
			if(tem=='\n')
				j=10000;
			else{
				code[j]=tem;
				count++;
			}
		}
		if(sqrt(count)==(double)(int)sqrt(count))
			decode(code,(int)sqrt(count));
		else
			printf("INVALID\n");		
	}
	
	return 0;
}
