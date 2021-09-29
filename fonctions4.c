#include<stdio.h>
#include "fonctions4.h"
int comparaison(int a , int b ){
    if (a>b){
        return a;
    }
    else {
        return b ;
    }
}
int saisirUnEntier(){
    int c;
    printf("Veuillez saisir un entier\n");
    scanf("%d",&c);
    return c;
}
int airRectangle(int longueur , int largeur){
    int aire1 = 2 * longueur + 2 * largeur ;
    return aire1;
}
int perimetreRectangle(int longueur , int largeur){
    int peri1 = largeur * longueur ;
    return peri1 ;
}
int comparaison2(int nombreUn , int nombreDeux){
    if (nombreUn % nombreDeux ==0){
        return 1;
    }
    else {
        return 0 ;
    }

}
int comparaison3(int nombreDeux){
    const int b = 3;
    if (nombreDeux % b == 0 & nombreDeux >= 10){
        printf("La valeur est superieur/egale a 10  et divisible par 3\n");
    }
    if(nombreDeux % b == 0 & nombreDeux < 10) {
        printf("La valeur est divisble par 3 mais inferieur a 10\n");
    }
    if (nombreDeux % b != 0 & nombreDeux >= 10){
        printf("La valeur n'est pas divisble par 3 mais superieur ou egale a 10\n");
    }
    if(nombreDeux % b != 0 & nombreDeux < 10) {
        printf("La valeur n'est pas divisble par 3 et inferieur a 10\n");
    }
    return 0;
}

int verif(int variable){
    while (variable<0 || 20<variable)
    {
        printf ("Votre note  n'est pas comprise entre 0 et 20 \n");
        variable = saisirUnEntier();
    }
    return variable ;
}
int calculMoyenne(int note1, int note2,int note3){
    float s = (note1 + note2 + note3)/3 ;
    return s;
}

int calculSommeEleves(int nbClasse){
    int nombreEleve = 0,incrementation = 1 , variable=0;
    while (incrementation <= nbClasse)
    {
        printf("Donnez le nombre d'eleve de la classe numero : %d\n",incrementation);
        scanf("%d",&variable);
        nombreEleve = nombreEleve + variable;
        incrementation = incrementation +1 ;
    }
    printf("Le nombre d'eleve est : %d\n", nombreEleve);
}

int verif2(v2){
    if ((v2 %7!= 0 && v2 %2 != 0) || (v2 %7 == 0 && v2 %2 != 0) || (v2 %7 !=0 && v2 % 2==0))
    {
        while ((v2 %7!= 0 && v2 %2 != 0) || (v2 %7 == 0 && v2 %2 != 0) || (v2 %7 !=0 && v2 % 2==0))
        {
            printf("Votre nombre saisie est pas bon. Veuillez le re saisir :\n");
            printf ("Votre note  n'est pas comprise entre 0 et 20 \n");
            v2 = saisirUnEntier();
        }
        printf("Votre chiffre est bon");
    }
    else
    {
        printf("Votre chiffre est bon");
    }
}
}