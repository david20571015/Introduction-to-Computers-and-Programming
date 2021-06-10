#include<stdio.h>

int main(){
	int answer[10],counter=0;
	
	while(counter!=10){		
		int n,s,x,y,f=0,ans=0,pow; 
		scanf("%d",&n); 
		
		if(n==0)
			break;	
		int k[n][30],l[30],a[n];	
	
		for(int i=0;i<n;i++){
			scanf("%d",&s);
			a[i]=s;
			for(int j=0;j<30;j++){
				if(s%2==0)
					k[i][j]=0;
				else
					k[i][j]=1;
				s/=2;			
			} 				
		}
	
		for(int j=0;j<30;j++){
			x=0;
			for(int i=0;i<n;i++){
				x+=k[i][j];	
			}
			if(x%2==0)
				l[j]=0;
			else{
				l[j]=1;
				f=1;
			}
		}
	
		if(f==1){
			for(int i=0;i<n;i++){
				y=0;
				pow=1;
				for(int j=0;j<30;j++){
					if(l[j]==1){
						k[i][j]+=1;
						k[i][j]%=2;
					}
					y+=pow*k[i][j];
					pow*=2;			
				} 
				if(y<=a[i])
					ans+=1;				
			}
		}
		else
			ans=0;
		
		answer[counter]=ans;
		counter++;
	}

	for(int i=0;i<counter;i++)
		printf("%d\n",answer[i]);
	
	return 0;
} 
