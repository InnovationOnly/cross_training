#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mastermind.h"
#include "menu.h"


void Play(int argc, char const* argv[])
{
	int verif = VerificationArguments(argc,argv); // On récupere dans la variable 1 (ok) et 0(ko)  
    if (verif==1)
    {
        Menu();
        MasterMind(argv);
    }
    if (verif==-2)
    {
        printf("Vous ne pouvez pas choisir un nombre de tentative negatif ou null \n");
        exit(1);
    }

}

void MasterMind(char const* argv[])
{
    char secret[4];                   // Tableau de combinaison secrète
    char selection[4];                // Tableau du choix de l'utilisateur
    int tentativeMax = atoi(argv[1]); // Nombre de tentatives
    int tentative = tentativeMax;
    int resultat = 0;
    int partie = 0; // Nombre de partie
    char voir_solution[4];            
    char cs, choix;
    
    srand(time(0));
    /* première boucle do-while pour le nombre de parties */
    do{
        printf("\n NOUVELLE PARTIE \n");
        printf("*******************\n");
	/*Fonction de génération aléatoire de la combinaison secrète */
        CombinaisonSecrete(secret);
        printf("Voulez-vous jouez en mode developpeur(Affichage de la table caché ) ?\n (O/N)\n");
        scanf(" %c",&cs);
        if(cs == 'O')
        {
           printf("Combinaison secrete : "); /* Affichage du tableau secret */
           Lecture(secret);
        }
        do
        {
            Saisie(selection);  /* Fonction de saisie de l'utilisateur */
	        /* Fonction d'affichage du tableau du choix de l'utilisateur */
            Lecture(selection);
             Tour new_tour;
	    /* Fonction de comparaison du choix de l'utilisateur avec la combinaison secrète */
            resultat = VerificationLettre(secret,selection,&new_tour);
            new_tour.combine = selection;
            new_tour.tentative=tentative;
            new_tour.secrete =secret;
            SauvegardeHistorique(partie,&new_tour);
            SauvegardeParties(&new_tour);
	    /* Si le résultat est bon */
            if (resultat == 1)
            {
                printf("Gagne !\n");
                break;
                tentative = 0;
            }
            else
            {
                printf("Perdu, retentez\n");
                printf("Il vous reste %d tentative ! \n",(tentative-1));
                printf("***********************************************\n");
            }

            tentative--;
        } while(tentative>0);
        partie++;
        tentative = tentativeMax;
        printf("Fin de la partie. Voir solution ?\n (O/N)\n");
        scanf(" %c",&voir_solution);
        if(voir_solution == 'O')
        {
           Lecture(secret);  /* Affichage du tableau */
        }
        printf("Voulez-vous rejouer une autre partie ?\n (O/N)\n");
        scanf(" %c",&choix);
    } while ((choix !='N'));
    printf("Merci d'avoir joué au MasterMind, peace and love ! \n ");
}