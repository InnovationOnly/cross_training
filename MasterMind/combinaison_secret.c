#include <stdio.h>
#include <stdlib.h>
#include "combinaison_secret.h"

/* Fonction qui génère aléatoirement une séquence de 4 lettes entre A et F */
void CombinaisonSecrete(char * secret)
{
    const int MAX = 70, MIN = 65;
    int lettre = 0;
    for (int i = 0; i < 4; i++)
    {
			switch(i)
			{
			case 0:
				lettre = (rand()%(MAX-MIN+1))+MIN; /* Nombre aléatoire */
				break;

			case 1:
				/* Nombre aléatoire différent des lettres précédentes */
				while((char*)lettre == secret[0])
				{
					lettre = (rand()%(MAX-MIN+1))+MIN;
				}
				break;
			case 2:
				/* Nombre aléatoire différent des lettres précédentes */
				while(((char*)lettre == secret[0]) || ((char*)lettre == secret[1]))
				{
					lettre = (rand()%(MAX-MIN+1))+MIN;
				}
				break;
			default:
				/* Nombre aléatoire différent des lettres précédentes */
				while(((char*)lettre == secret[0]) || ((char*)lettre == secret[1]) || ((char*)lettre == secret[2]))
				{
					lettre = (rand()%(MAX-MIN+1))+MIN;
				}
				break;
	}
        secret[i] = (char*)lettre; /* Conversion de l'entier en caractère */
    }
}