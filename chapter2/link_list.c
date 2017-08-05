#include <stdio.h>
#include <stdlib.h>
#include"header.h"

list *creation(){

	list *list=malloc(sizeof(*list));

	list->head=NULL;

	list->tail=NULL;

	list->nbelt=0;

	return list;
}
void insert_to_the_head(list *list,int nbre){

	node *nouveau=malloc(sizeof(*nouveau));

	nouveau->valeur=nbre;

	nouveau->next=list->head;

	list->head=nouveau;

	if(list->tail==NULL) list->tail=nouveau;

	list->nbelt++;
}
void insert_to_the_tail(list *list,int nbre){

	node *nouveau=malloc(sizeof(*nouveau));

	nouveau->valeur=nbre;

	nouveau->next=NULL;

	if(list->head==NULL) {list->head=nouveau;}

	if(list->tail!=NULL){list->tail->next=nouveau;}

	list->tail=nouveau;

	list->nbelt++;
}
int delete_to_the_tail(list *list){

	node *pred=malloc(sizeof(*pred));node *going=malloc(sizeof(*going));

	going=list->head;

	while(going->next!=NULL){

		pred=going;

		going=going->next;

	}
	list->tail=pred;

	int nb=going->valeur;

	free(going);

	if(pred!=NULL){pred->next=NULL;}

	else{list->head=NULL;}

	list->nbelt--;

	free(going);

	return nb;
}
int delete_to_the_head(list *list){

	node *going=malloc(sizeof(*going));

	going=list->head;

	list->head=list->head->next;

	int nb=going->valeur;

	free(going);

	return nb;
}
void insert_(node *t,int valeur){

	node *new=malloc(sizeof(*new));

	new->valeur=valeur;

	new->next=t->next;

	t->next=new;
}
int delete_after_t(list list,node *t){

	t=liste->head;

	for(j=0;j<N/2;j++){

		t=t->next;

	}

	printf("%d\n",t->valeur);


	node *x=malloc(sizeof(*x));

	int y;

	x=t->next,

	t->next=t->next->next;

	y=t->valeur;

	free(t);

	return y;
}
void movenexttofront(list *list,node *t){

	int x;

	x=delete_after_t(t);

	insert_to_the_head(list,x);
}
void exchange(node *t,node *u){

	int x,y;

	x=delete_after_t(t);

	y=delete_after_t(u);

	insert_(t,y);

	insert_(u,x);
}
void printlist(list *list){

	
    	if (list == NULL)
    	{
        	exit(EXIT_FAILURE);
    	}

    	node *actuel = list->head;

    	while (actuel != NULL)
    	{
        	printf("%d -> ", actuel->valeur);

        	actuel = actuel->next;
    	}
    	printf("NULL\n");
}



