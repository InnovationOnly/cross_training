#ifndef SAUVEGARDE_FILE
#define SAUVEGARDE_FILE
#include "verification_lettre.h"

/* Cette fonction d'initialisation permets de rajouter des informations 
comme le jours , l'heure dans le fichier de SauvegardeHistorique  */
void InitialisationFichier();

void SauvegardeHistorique(int partie, Tour *tour);
void SauvegardeParties(struct Tour *tour);


#endif