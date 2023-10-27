#include <stdio.h>
#include "save.h"
#include <stdlib.h>
#include "grille.h"
int regle(){
    printf("Snoopy ne peut pas se deplacer en diagonale. Il ne peut se deplacer que dans les 4 directions classiques\n"
           "(Haut, Bas, Gauche et Droite) et d'une seule case a la fois. Evidemment, en cas d'obstacle, Snoopy ne\n"
           "pourra pas effectuer son deplacement. De plus, chaque niveau dispose d'un timer de 120 secondes, ainsi, lorsque vous arrivez a 0 seconde vous perdez une vie. Pour gagner la partie, il faut recuperer les 4 oiseaux du niveau. . ");
}
int nouveaujeu(){
    short int grille[TAILLE_LIGNES][TAILLE_COLONNES] = {0}; //Initialisation d'un tableau 2D (matrice) de 10 par 20, composée de 0.
    //Type "short int" pour n'occupper due 2 octets mémoire au lieu de 4 octets avec un type "int".
    Creation_grille(grille); //On crée la grille de jeu en modifiant en conséquence le tableau "grille"
    Affiche_grille(grille);//On affiche le tableau "grille"


}
int charger(){
    int short Sauvegarde(short int tab_grille[TAILLE_LIGNES][TAILLE_COLONNES]);
}
int mdp(){
    int motDePasse;
    printf("Vous pouvez acceder au niveau de votre choix si vous connaissez son mot de passe. Veuillez saisir ce dernier : ");
    scanf("%d",&motDePasse);
    //suivant le mdp choisi et sil correspond a un des niveaux appel de la fonction associée

}
int scores(){ //faire quand niveaux prets

}
int quitter(){
    return 0;

}




int affichagemenu() {
    int n;
    printf("\t 1.Regles du jeu \n \t 2.Lancer un nouveau jeu a partir du niveau 1 \n \t 3.Charger une partie \n \t 4.Mots de passe \n \t 5.scores \n \t 6.Quitter ");
printf("\n choisir une fonctionnalite en tapant le chiffre correspondant :");
scanf("%d",&n);
if (n==1) regle();
if (n==2) nouveaujeu();
if (n==3) charger();
if(n==4) mdp();
if (n==5) scores();
if (n==6) quitter();
}
