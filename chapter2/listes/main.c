#include <stdio.h>
#include <stdlib.h>
#include "liste_chainee.h"
#include "liste_chainee.c"

int main()
{
    Liste *maListe = initialisation();

    insertion(maListe, 1);
    insertion(maListe, 8);
    insertion(maListe, 14);
    insertion(maListe, 16);
    suppression(maListe);

    afficherListe(maListe);

    return 0;
}

