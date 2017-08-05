/*the goal of this other exercise is to compute the binary equivalent of a number entered by a user*/
#include<stdio.h>
#include<stdlib.h>
int binary(int number);
int main(){

	int number;

	printf("please enter the number whose binary equivalent need to be computed");

	scanf("%d",&number);

	printf("the binary equivalent is %d",binary(number));

return 0;
}
int binary(int number){

	int base=1,reminder=0,binary;

	while(number>0){

		reminder=number%2;

		binary=binary+reminder*base;
	
		number/=2;

		base=base*10;
	}

	return binary;
}
