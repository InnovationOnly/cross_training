#ifndef VERIF_FILE
#define VERIF_FILE

typedef struct Tour 
{
    int b_placer;
    int m_placer;
    int tentative;
    char *combine;
    char *secrete;
    int fintour;
}Tour;

/* Fonction qui compare la combinaison du joueur avec la combinaison secrète */
extern int VerificationLettre(char * secret, char * selection,Tour *new_tour);

#endif