//
// Created by Maxence on 25/10/2023.
//
#include <stdio.h>
#include "grille.h"
#include "timer.h"
#include "unistd.h"
#define TAILLE_LIGNES 10
#define TAILLE_COLONNES 20

void timer (short int tab_grille[TAILLE_LIGNES][TAILLE_COLONNES]){
    int Fin=0;
    for(short int i=0;i<TAILLE_LIGNES;i++){
        for(short int l=0;l<TAILLE_COLONNES;l++){
            if(tab_grille[i][l]==4){
                tab_grille[0][i]=8;
                sleep(1);
                tab_grille[0][i]=0;
                Fin+=1;
                if(Fin==120){
                    printf("fin!");
                }
            }
        }
    }
}
