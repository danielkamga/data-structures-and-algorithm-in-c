#include <stdio.h>
#include <stdlib.h>
#include "liste_chainee.h"

Liste *initialisation()
{
    	Liste *liste = malloc(sizeof(*liste));
    	Element *element = malloc(sizeof(*element));

    	if (liste == NULL || element == NULL)
   	{
        	exit(EXIT_FAILURE);
    	}

    	element->nombre = 0;
    	element->suivant = NULL;
    	liste->premier = element;

    	return liste;
}


void insertion(Liste *liste, int nvNombre)
{

	printf("insertion of %d\n*",nvNombre);

   	 /* Création du nouvel élément */
    	Element *nouveau = malloc(sizeof(*nouveau));

    	if (liste == NULL || nouveau == NULL)
    	{
        	exit(EXIT_FAILURE);
    	}
    	nouveau->nombre = nvNombre;

    	/* Insertion de l'élément au début de la liste */
    	nouveau->suivant = liste->premier;

    	liste->premier = nouveau;

	afficherListe(liste);

	printf("\n");
}


void suppression(Liste *liste)
{
    	if (liste == NULL)
    	{
        	exit(EXIT_FAILURE);
    	}

    	if (liste->premier != NULL)
    	{
        	Element *aSupprimer = liste->premier;

        	liste->premier = liste->premier->suivant;

        	free(aSupprimer);
    	}
}

void afficherListe(Liste *liste)
{
    	if (liste == NULL)
    	{
        	exit(EXIT_FAILURE);
    	}

    	Element *actuel = liste->premier;

    	while (actuel != NULL)
    	{
        	printf("%d -> ", actuel->nombre);
        	actuel = actuel->suivant;
    	}
    	printf("NULL\n");
}
printf("\n");

	printlist(liste);

	node *t=malloc(sizeof(*t));

	t=liste->head;

	for(j=0;j<N/2;j++){

		t=t->next;

	}

	movenexttofront(liste,t);

	printlist(liste);

	node *v=malloc(sizeof(*v));

	v=liste->head;

	exchange(t,v);

	printlist(liste);	









