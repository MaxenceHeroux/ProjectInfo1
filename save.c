//
// Created by OLIVIER on 22/10/2023.
//

#include "save.h"
#include <stdio.h>
#define TAILLE_LIGNES 10
#define TAILLE_COLONNES 20

short int Sauvegarde(int tab_grille[TAILLE_LIGNES][TAILLE_COLONNES]) {
    FILE* p_grille;
    p_grille = fopen("..\\save_grille.txt", "w+");
    for (int i=0; i<TAILLE_LIGNES; i++) {
        for (int j=0; j<TAILLE_COLONNES; j++) {
            fprintf(p_grille, "%d", tab_grille[i][j]);
        }
        fprintf(p_grille, "\n");
    }
    fclose(p_grille);
    return 0;
}
