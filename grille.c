//
// Created by OLIVIER on 22/10/2023.
//

#include "grille.h"
#include <stdio.h>
#define TAILLE_LIGNES 10
#define TAILLE_COLONNES 20

void Affiche_grille(int tab_grille[TAILLE_LIGNES][TAILLE_COLONNES]) {
    for (int l=0; l<TAILLE_LIGNES; l++) {
        for (int c=0; c<TAILLE_COLONNES; c++) {
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
                    if (l!=0 && l!=9) {
                        if (c==0) {
                            printf("%c   ", 15); //0xF
                        }
                        else if (c==19){
                            printf("  %c", 15); //0xF
                        }
                    }
                    else {
                        printf("%c ", 15);
                    }
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

void Creation_grille(int tab_grille[TAILLE_LIGNES][TAILLE_COLONNES]) { //Création des contours uniquement pour le moment.
    for (int i=0; i<TAILLE_LIGNES; i++) {
        if (i==0 || i==9) { //Ligne de rang 0 et de rang 9 sont des bords (bord supérieur et bord inférieur).
            for (int j=0; j<TAILLE_COLONNES; j++) {
                tab_grille[i][j] = 4;
            }
        }
        else {
            for (int j=0; j<TAILLE_COLONNES; j++) {
                if (j != 0 && j != 19) { //Inutile pour le moment
                    tab_grille[i][j] = 0;
                }
                else {
                    tab_grille[i][0] = 4; //Colonne de rang 0 (bord gauche).
                    tab_grille[i][19] = 4; //Colonne de rang 19 (bord droit).
                }
            }
        }
    }
}
