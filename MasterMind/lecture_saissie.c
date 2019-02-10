#include <stdio.h>
#include <stdlib.h>


/* Fonction d'affichage d'un tableau */
void Lecture(char tableau[])
{
    int i;

    for (i = 0; i < 4; i++)
    {
        printf(" %c", tableau[i]);
    }
    printf("\n");
}


/* Fonction de saisie d'un tableau de caractères*/
void Saisie(char * selection)
{
    int i;
    printf("Entrez votre combinaison de 4 lettres : \n");
    scanf("%s",selection);
/*
    for (i = 0; i < 4; i++)
    {
        printf("Lettre numero %d : ", i + 1);
        scanf(" %c", selection + i);
    }
*/

}