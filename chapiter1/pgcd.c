/*the goal of this exercise is to implement a function who reduce a given fraction to lowest terms using the structure fraction */
#include<stdio.h>
#include<stdlib.h>
#include"pgcd.h"
int gcd(int up,int down);
int main(){

	printf("enter please 1 if you want to compute the gcd of three numbers or something else if you want to reduice a fraction");

	int choice;

	scanf("%d",&choice);

	if(choice==1){

		int a,b,c,d;

		printf("please enter the three numbers");

		scanf("%d %d %d",&a,&b,&c);

		d=gcd(a,b);

		printf("the gcd of the numbers are %d",gcd(d,c));		

	}
	else{

		int up,down;

		while(down==0){

			printf("enter the values of up and down");

			scanf("%d %d",&up, &down);}

		fraction point;

	 	point.numerateur=up;

		point.denominateur=down;

		down=gcd(up,down);

		point.numerateur=point.numerateur/down;

		point.denominateur/=down;
	
		printf("your reduced fraction is %d/%d",point.numerateur, point.denominateur);
	}

	
	return 0;

}
int gcd(int up,int down)
{
	int t,i=0;
	
	while(up>0)

	{
	if(down > up)//permutation;
		{
			t=up; 

			up= down; 

			down=t;}

	up= up-down;//execution de l'algo;

	printf("the values of up and down when the algorithm is going in are %d %d\n",up,down);

	i++;
	}

	printf ("the number of statements executed are %d\n",i);

	return down;
}
