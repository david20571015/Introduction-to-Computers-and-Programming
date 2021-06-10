#include<stdio.h>

char a[50];

void permutation(char list[],int count,int rest){
	if(rest==0){
		for(int i=0;i<count;i++)
			printf("%c",a[i]);
		printf("\n");
	}
	
	else{
		for(int i=0;i<rest;i++){
			char tmp[50];
			for(int j=0;j<rest;j++){
				if(j<i)					
					tmp[j]=list[j];
				else
					tmp[j]=list[j+1];
			}
			a[count]=list[i];
			permutation(tmp,count+1,rest-1);			
		}
	}
}

int main(void){
	int size=0;
	char str[50]={'\0'};
	printf("Please input a string :");
	scanf("%s",&str);
	for(int i=0;i<50;i++)
		if(str[i]!='\0')
			size++;
	for(int i=0;i<size;i++)
		a[i]=str[i];
	permutation(str,0,size);		
	return 0;
}
