/*link*/
#include<stdio.h>

#include<stdlib.h>

#include"header.h" 

#include"link_list.c"

int main(){

	int i=0,N=0,j;

	list *liste=creation();

	printf("please enter the hole number of the items of the list");

	scanf("%d",&N);

	printf("please enter the items of the list one by one");

	for(j=0;j<N;j++){

		scanf("%d",&i);

		insert_to_the_tail(liste,i);

	}
	printlist(liste);

	node *t=malloc(sizeof(*t));

	
	delete_after_t(list list,t);

	printlist(liste);
	
return 0;
}
