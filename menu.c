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
