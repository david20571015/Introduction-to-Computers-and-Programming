#include<stdio.h>
#include<stdlib.h>

void in_vec(int *a,int m){//1.
		for(int i=0;i<m;i++)
			scanf("%d",&a[i]);
}

void out_vec(int a[],int v,int m){	//2.  1*m,v=0;n*1,v=1
	printf("\n");
	if(v)
		for(int i=0;i<m;i++)
			printf("%d\n",a[i]);
	else
		for(int i=0;i<m;i++)
			printf("%-3d",a[i]);
}

void in_mat(int *a,int m,int n){ //3.
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			scanf("%d",&a[n*i+j]);
	}		
}

void out_mat(int a[],int m,int n){ //4.
	printf("\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			printf("%-3d",a[n*i+j]);
		printf("\n");
	}
}

void tran(int a[],int m,int n){ //6.
	int ans[n*m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			ans[m*j+i]=a[n*i+j];
	}
	out_mat(ans,n,m);
}

void add(int a[],int b[],int m,int n){ //7.
	int ans[n*m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			ans[n*i+j]=a[n*i+j]+b[n*i+j];
	}
	out_mat(ans,n,m);
}

void mul(int a[],int b[],int m,int l,int n){ //8.
	int ans[n*m]={0};
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<l;k++)
				ans[n*i+j]+=a[l*i+k]*b[n*k+j];
		}
	}
	out_mat(ans,m,n);
}

int main(void){
	int swi,a[1000],b[1000],m1,n1,m2,n2;
	char conti='y';
	
	while(conti=='y'){
		printf("1.Multiplying a matrix by a vector\n");
		printf("2.The transpose of a matrix\n");
		printf("3.Matrix Addition\n");
		printf("4.Matrix Multiplication\n");
		scanf("%d",&swi);
		switch(swi){
			case 1:{
				system("cls");
				int s;
				printf("1.Multiplying on the right\n");
				printf("2.Multiplying on the left\n");
				scanf("%d",&s);
				switch(s){
					case 1:{
						system("cls");
						printf("Plaese input m (m*n) : ");
						scanf("%d",&m1);
						printf("Plaese input n (%d*n) : ",m1);
						scanf("%d",&n1);
						printf("Plaese input a matrix (%d*%d) : \n",m1,n1);
						in_mat(a,m1,n1);
						printf("Plaese input a vec (%d*1) : \n",n1);
						in_vec(b,n1);
						mul(a,b,m1,n1,1);
						break;
					}
					case 2:{
						system("cls");
						printf("Plaese input m (1*m) : ");
						scanf("%d",&m1);
						printf("Plaese input a vec (1*%d) : \n",m1);
						in_vec(b,m1);
						printf("Plaese input n (%d*n) : ",m1);
						scanf("%d",&n2);
						printf("Plaese input a matrix (%d*%d) : \n",m1,n2);
						in_mat(a,m1,n2);					
						mul(b,a,1,m1,n2);
						break;
					}
				}
				break;
			}
			case 2:{
				system("cls");
				printf("Plaese input m (m*n) : ");
				scanf("%d",&m1);
				printf("Plaese input n (%d*n) : ",m1);
				scanf("%d",&n1);
				printf("Plaese input a matrix (%d*%d) : \n",m1,n1);
				in_mat(a,m1,n1);
				tran(a,m1,n1);
				break;
			}
			case 3:{
				system("cls");
				printf("Plaese input m (m*n) : ");
				scanf("%d",&m1);
				printf("Plaese input n (%d*n) : ",m1);
				scanf("%d",&n1);
				printf("Plaese input a matrix (%d*%d) : \n",m1,n1);
				in_mat(a,m1,n1);
				printf("Plaese input a matrix (%d*%d) : \n",m1,n1);
				in_mat(b,m1,n1);
				add(a,b,m1,n1);
				break;
			}
			case 4:{
				system("cls");
				printf("Plaese input m (m*n) : ");
				scanf("%d",&m1);
				printf("Plaese input n (%d*n) : ",m1);
				scanf("%d",&n1);
				printf("Plaese input a matrix (%d*%d) : \n",m1,n1);
				in_mat(a,m1,n1);
				printf("Plaese input n (%d*n) : ",n1);
				scanf("%d",&n2);
				printf("Plaese input a matrix (%d*%d) : \n",n1,n2);
				in_mat(b,n1,n2);
				mul(a,b,m1,n1,n2);
				break;
			}
		}
		printf("\ncontinue?(y/n)\n");
		scanf(" %c",&conti);
	}
	return 0;
}
