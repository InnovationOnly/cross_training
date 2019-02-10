#include <stdio.h>
#include <stdlib.h>
#include "verification_lettre.h"

/* Fonction qui compare la combinaison du joueur avec la combinaison secrète */
int VerificationLettre(char * secret, char * selection,Tour *tour)
{
    int i=0;
    int j=0;
	// Nombre de lettres bien placées
    int bien_place = 0;
    tour->b_placer=0;
	// Nombre de lettres mal placées
    int mal_place = 0;
    tour->m_placer=0;
    /* Comparaison de chaque lettre du tableau de la combinaison avec chaque lettre du tableau du choix de l'utilisateur */

    /* Première boucle parcourt le tableau du choix de l'utilisateur */
    for(i=0; i<4; i++)
    {
	/* Deuxième boucle parcourt le tableau de la combinaison secrète */
        for(j=0; j<4; j++)
        {
	    /* Si les lettres comparées sont similaires et que leur position sont la meme */
            if((*(selection+i) == *(secret+j)) && (i==j))
            {
                bien_place++;
                 tour->b_placer = bien_place;
	        }

	    /* Si les lettres comparées sont similaires mais que leurs positions sont différentes */
            else if ((*(selection+i) == *(secret+j)) && (i!=j))
            {
                mal_place++;
                tour->m_placer = bien_place;
            }
        }
    }
    
   // Sauvegarde2(argv,new_tour);

    /* Si toutes les lettres sont bien placées */
    if (bien_place == 4)
    {
        return 1;
    }

    /* Si pas toutes les lettres sont bien placées */
    else
    {
        printf("\nIl y a %d lettre(s) bien placee(s) et %d lettre(s) mal placee(s)\n\n",bien_place, mal_place);
        return 0;
    }

}