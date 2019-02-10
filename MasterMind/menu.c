#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int VerificationMode(char const* argv[])
{
    if(strcmp(argv[2],"-dev")== 0)
    {
        return 1;
    }
}

int VerificationArguments(int argc,char const* argv[])
{
    if(argc != 2)
    {
        printf("Erreur ! problème d'argumenrs \n ");
        printf("Il faut passer le nombre de partie souhaitez en argnuments \n ");
        return -1;
    }else if (atoi(argv[1])==0)
    {
        return -2;
    }
    
    return 1;
}


void Menu()
{
    
    printf("Bienvenu dans le jeu Mastercard \n");
    printf(" Voici les règles : \n");
    printf(" - Une séquence cachée de 4 lettres entre A et F est générée au début de chaque partie \n");
    printf(" - Votre but est de deviner cette séquence en proposant une combinaison \n");
    printf(" - Choisissez le nombre de tentatives d'une partie. \n\n");
    printf(" Bonne chance ! \n ");

}
