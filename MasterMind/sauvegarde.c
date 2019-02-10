#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sauvegarde.h"

void InitialisationFichier()
{
   time_t curtime;
   struct tm *loc_time;
   curtime = time (NULL);
   loc_time = localtime (&curtime);
     FILE * fp;
     fp = fopen("historique.txt", "a+");
     if(fp==NULL)
          exit(1);

     fprintf(fp," %s \n",asctime (loc_time));
     fclose(fp);
}

void SauvegardeHistorique(int numero_partie,Tour *tour)
{
     FILE * fp;
     fp = fopen("historique.txt", "a+");
     if(fp==NULL)
          exit(1);

     fprintf(fp,"Partie : %d \n",numero_partie); //Numero de la parie reçu en paramètre 
     fprintf(fp,"Tentative : %d \n",tour->tentative); // On affiche tentative
     fprintf(fp,"Combinaison saisie : %s \n",tour->combine); // On affiche la combinaison
     fprintf(fp,"%d lettre(s) bien placé et %d lettre(s) mal placé \n",tour->b_placer,tour->m_placer); // On affiche la combinaison
     fputs("\n",fp);
     fclose(fp);
}

void SauvegardeParties(Tour *tour)
{
     FILE * fp;
     fp = fopen("Partie_En_Cours.txt", "w");
     if(fp==NULL)
          exit(1);

     fprintf(fp,"%s \n","Partie en cours .."); //Numero de la parie reçu en paramètre 
     fprintf(fp,"Tentative : %d \n",tour->tentative); // On affiche tentative
     fprintf(fp,"Combinaison saisie : %s \n",tour->combine); // On affiche la combinaison
     fprintf(fp,"%d lettre(s) bien placé et %d lettre(s) mal placé \n",tour->b_placer,tour->m_placer); // On affiche la combinaison
     fputs("\n",fp);
     fclose(fp);
}