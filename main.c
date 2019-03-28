//Projet Bataille Navale MA-20 & ICT 431
//Auteur: Gwenaël West
//Mars 2019
//Mars 2019

#include <stdio.h>
#include <stdlib.h>
#include "fontions.h"
#define LIGNES 10
#define COLONNES 10

int valeurgrille [LIGNES] [COLONNES]= {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,2,2,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,4,4,4,4,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
};

char grillejeu [LIGNES][COLONNES]= {
        {'-','-','-','-','-','-','-','-','-','-'},
        {'-','-','-','-','-','-','-','-','-','-'},
        {'-','-','-','-','-','-','-','-','-','-'},
        {'-','-','-','-','-','-','-','-','-','-'},
        {'-','-','-','-','-','-','-','-','-','-'},
        {'-','-','-','-','-','-','-','-','-','-'},
        {'-','-','-','-','-','-','-','-','-','-'},
        {'-','-','-','-','-','-','-','-','-','-'},
        {'-','-','-','-','-','-','-','-','-','-'},
        {'-','-','-','-','-','-','-','-','-','-'},
        };


int main () {
    int ChoixMenu,Jouer, i, j;
    int despe = 15;
    int Score = 0;

    printf("\nBienvenue, vous allez a present vivre une experience incroyable et revolutionnaire \n La Bataille Navale.\n");
    printf("1. Jouer\n");
    printf("2. Aide\n");
    printf("3. Quitter\n");
    printf("Que voulez-vous faire? \n");
    scanf("%d",&ChoixMenu);

    switch (ChoixMenu){
        default:
            //sesrahsaerhareh
            printf("nique ta mere");
            exit(0);

        case 1:
            printf("Lancement de la partie\n\n");
            Score = JouerFonction(grillejeu,valeurgrille);
            system("cls");
            printf("vous avez gagne en %d coups.\n",Score);
            system("pause");
            break;
        case 2:
            printf("AideAideAideAide");
            break;

        case 3:
            return 420;
    }


    return 0;
}