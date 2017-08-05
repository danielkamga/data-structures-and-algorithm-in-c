/*dimension*/
#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b);
int main(){

	int M,N;

	printf("enter successfuly the number of lines and columns");

	scanf("%d %d",&M,&N);	
	
	int T[M][N],i,j;

	for(i=1;i<=M;i++){

		for(j=1;j<=N;j++){

			T[i][j]=(gcd(i,j)==1?1:0);

		}

	}
	for(i=1;i<=M;i++){

		for(j=1;j<=N;j++){

			printf("%d\t",T[i][j]);

		}
	printf("\n");
	}

return 0;
}
int gcd(int a,int b){

	int t;

	while(a>0){

	if(b>a){

			t=a;a=b;b=t;

		}

		a=a-b;
	}
	return b;
}	
