#ifndef MASTERMING_FILE
#define MASTERMING_FILE
#include "verification_lettre.h"
#include "lecture_saissie.h"
#include "combinaison_secret.h"
#include "sauvegarde.h"
#include "menu.h"
/*Fonction pour lancer la fonction mastermind dans les bonnes conditions 
par exemple après la verification des arguments passer en paramètre */
void Play(int argc, char const* argv[]);

/* Fonction principale du jeux, on recuperer le nombre de tentative en paramètre
et on fait apale à des fonctions pour recuperer la saisie de l'utilisateur, genérér la combinaison secrète
et executer l'algrorithme permetant de vérifier les lettres bien placés et mal placés. 
*/
extern void MasterMind(char const* argv[]);

#endif