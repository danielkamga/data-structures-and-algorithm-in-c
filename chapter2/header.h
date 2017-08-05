#ifndef H_LISTE_CHAINEE
#define H_LISTE_CHAINEE

typedef struct node node;

	struct node{

		int valeur;

		struct node* next;

		struct node* previous;

	};

typedef struct list list;

	struct list{

		struct node* head;

		struct node *tail;

		int nbelt;
	};

list *creation();

void movenexttofront(list *list,node *t);

void insert_to_the_head(list *list,int nbre);

void insert_to_the_tail(list *list,int nbre);

int delete_to_the_tail(list *list);

int delete_to_the_head(list *list);

void insert_after_t(node *t,int valeur);

int delete_(list list,node *t);

void printlist(list *list);

void exchange(node *t,node *u);		

#endif	
