//Projet Bataille Navale MA-20 & ICT 431
//Auteur: Gwenaël West
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
    int ChoixMenu;
    int Score = 0;

    //-----------------------------------     Affichage du Menu Principal       -------------------------------------------------->>

    printf("\nBienvenue, vous allez a present vivre une experience incroyable et revolutionnaire \n La Bataille Navale.\n");
    printf("1. Jouer\n");
    printf("2. Aide\n");
    printf("3. Quitter\n");
    printf("Que voulez-vous choisir ?\n");
    scanf("%d",&ChoixMenu);

    //-----------------------------------     Switch du menu pour le choix de l'utilisateur     ------------------------------------->>

    switch (ChoixMenu){
        default:
            printf("essayer autre chose");
            exit(0);

        case 1:
            printf("Lancement de la partie\n\n");
            Score = JouerFonction(grillejeu,valeurgrille);
            system("cls");
            printf("Victoire !!!!!\n");
            printf("vous avez gagne en %d coups.\n",Score);
            system("pause");
            break;
        case 2:
            system("cls");
            printf("Le but du jeu est de couler tous les bateaux de l'adversaire.\n\n");
            printf("Pour cela, vous devez essayer de tirer sur ses navires en devinant leurs positions.\n");
            printf("Pour tirer, il faut citer les coordonnees d'un emplacement dans la grille. \n");
            printf("Si le bateau de votre opposant se trouve a cette position alors il est touche\n");
            printf("Pour couler le navire, il faut le toucher entièrement.\n"
                   " C'est a dire qu'un bateau prenant 4 cases doit etre atteint en ses 4 cases pour être coule.\n");
            printf("Vous gagnez quand vous faites chavirer tous les navires ennemi.\n\n");
            system("pause");
            system("cls");
            main();
            break;

        case 3:
            return 3;
    }


    return 0;
}