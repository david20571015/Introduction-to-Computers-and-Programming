#include<stdio.h>

bool palindrome(char d1[],char d2[],int from,int to){
	bool f=1;
	for(int i=0;i<=to-from;i++)
		if(d1[from+i]!=d2[to-i])
			f=0;
	return f;	
}

int main(void){
	int l,pos,len=0;
	printf("Enter length of palindromic sequence: ");
	scanf("%d",&l);
	char d1[l],d2[l];
	printf("Enter on strand of DNA molecule segment: ");
	scanf("%s",&d1);
	printf("Enter complementary strand: ");
	scanf("%s",&d2);
	
	for(int i=0;i<l-1;i++){
		for(int j=i+1;j<l;j++)
			if(palindrome(d1,d2,i,j)&&(j-i)>len){
				pos=i;
				len=j-i+1;
			}
	}
	
	printf("length of palindrome is %d\n",len);
	printf("position of palindrome is %d\n",pos);
	for(int i=pos;i<pos+len;i++)
		printf("%c",d1[i]);
	printf("\n");
	for(int i=pos;i<pos+len;i++)
		printf("%c",d2[i]);
	printf("\n");
	
	return 0;
}
