# include <stdio.h>
#include "tp4.h"
#include "fonctions4.h"
void exercice1(){
    int a = saisirUnEntier();
    int b = saisirUnEntier();
    int rendu  = comparaison(a,b) ;
    printf(" La valeur est %d \n", rendu);

}
void exercice3(){
    printf("Rentrez la valeur de la longeueur\n");
    int longueur = saisirUnEntier();
    printf("Rentrez la valeur de la largeur\n");
    int largeur = saisirUnEntier();
    int perimetre = perimetreRectangle(longueur , largeur);
    int aire = airRectangle(longueur , largeur );
    printf("Votre perimetre est de : %d\nVotre aire est de : %d\n",aire  , perimetre);

}

void exercice4(){
    printf("Veuillez saisir le premier nombre :\n");
    int nombreUn = saisirUnEntier();
    printf("Veuillez saisir le deuxieme nombre :\n");
    int nombreDeux = saisirUnEntier();
    int secondeRegle = comparaison3(nombreDeux);
    printf("%d\n%d\n",comparaison2(nombreUn,nombreDeux),secondeRegle);
}

void exercice5(){
    printf("Veuillez saisir la premiere note :\n");
    int note1 = verif(saisirUnEntier());
    printf("Veuillez saisir la deuxieme note  :\n");
    int note2 = verif( saisirUnEntier());
    printf("Veuillez saisir la troisime note :\n");
    int note3 = verif(saisirUnEntier());
    float moyenne = calculMoyenne(note1 , note2 , note3 );
    printf("Votre moyenne est de : %f\n",moyenne);
}
void exercice7(){
    printf("Veuillez saisir le nombre de classe :\n");
    int nbClasse = saisirUnEntier();
    printf("%d",calculSommeEleves(nbClasse));
}
void exercice8(){
    printf("Veuillez saisir votre valeur : ");
    printf("%d",int valeurexo8 =verif2(saisirUnEntier()));
}