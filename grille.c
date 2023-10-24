//
// Created by OLIVIER on 22/10/2023.
//

#include "grille.h"
#include <stdio.h>
#define TAILLE_LIGNES 10
#define TAILLE_COLONNES 20

void Affiche_grille(short int tab_grille[TAILLE_LIGNES][TAILLE_COLONNES]) {
    for (short int l=0; l<TAILLE_LIGNES; l++) {
        for (short int c=0; c<TAILLE_COLONNES; c++) {
            switch (tab_grille[l][c]) { //On teste chaque case du tableau
                case 0: {
                    printf("%c ", 0); //0x0
                    break;
                }
                case 1: {
                    printf("%c ", 6); //0x6
                    break;
                }
                case 2: {
                    printf("%c ", 26); //1x6
                    break;
                }
                case 3: {
                    printf("%c ", 5); //0x5
                    break;
                }
                case 4: {
                    printf("%c ", 15); //0xF
                    break;
                }
                case 5: {
                    printf("%c ", 10); //0xA
                    break;
                }
               case 6: {
                    printf("%c ", 22); //1xA
                    break;
               }
                case 7: {
                    printf("%c ", 1); //0x1
                    break;
                }
                case 8: {
                    printf("%c ", 11); //0xB
                    break;
                }
                case 9: {
                    printf("%c ", 14); //0xE
                    break;
                }
            }
        }
        printf("\n");
    }
}

void Creation_grille(short int tab_grille[TAILLE_LIGNES][TAILLE_COLONNES]) { //Création des contours uniquement pour le moment.
    FILE *pgrille_niveau = fopen("..\\niveau.txt", "r");
    short int element;
    for (int i = 0; i < TAILLE_LIGNES; i++) {
        for (int j = 0; j < TAILLE_COLONNES; j++) {
            fscanf(pgrille_niveau, "%hi", &element); //%hi pour les "short int".
            tab_grille[i][j] = element;
        }
    }
}
