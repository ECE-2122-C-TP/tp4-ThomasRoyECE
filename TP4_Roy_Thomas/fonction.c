//
// Created by admin on 29/09/2021.

#include <stdio.h>
#define A 10
int Getmax(int entier1,int entier2){
    ((entier1 > entier2) ? printf("Le plus grand des 2 est %d.\n",entier1) : printf("Le plus grand des 2 est %d.\n", entier2));
}
int saisirEntier(){
    int entier=0;
    printf("\n Saisissez un entier: ");
    scanf("%d", &entier);
    return(entier);
}
int calculAire(int longueur,int largeur){
    int aire=0;
    aire=longueur*largeur;
    return(aire);
}
int calculPerimetre(int longueur,int largeur){
    int perimetre=0;
    perimetre=2*longueur+2*largeur;
    return(perimetre);
}
int calculMultiple(entier1,entier2){
    if(entier1 % entier2 == 0) {
        printf("\n 1");
    }
    else{
        printf("\n 0");
    }
    return(0);
}
int multipleDeTrois(entier1){
    if (entier1 % 3 == 0) {
        printf("\n %d saisi est un multiple de 3",entier1);
    } else {
        printf("\n %d saisi n'est un multiple de 3",entier1);
    }
    return (0);
}
int superieurADix(entier1) {
    if (entier1 >= A ) {
        printf("\n %d saisi est supérieur à 10", entier1);
    } else {
        printf("\n %d saisi est supérieur à 10", entier1);
    }
    return (0);
}
float moyenne(){
    float note1=0,note2=0,note3=0,moyenne=0;
    printf("Insérer une note");
    scanf( "%f",&note1);
    printf("Insérer une note");
    scanf( "%f",&note2);
    printf("Insérer une note");
    scanf( "%f",&note3);
    if(note2 < 0 || note2 > 20 && note1 < 0 || note1 > 20 && note3 < 0 || note3 > 20) {
        return(-1);
    }
    else{
        moyenne = (note1+note2+note3)/3;
        return (moyenne);
    }
    return(0);
}

