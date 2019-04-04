//Projet Bataille Navale - Fonctions
//Auteur: Gwenaël West
//Mars 2019

#ifndef NAVALBAATTTT_FONTIONS_H
#define NAVALBAATTTT_FONTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void AfficherTableau(char Tableau[10][10]){ //Fonction pour afficher la carte

    int ligne = 0; //utilisée pour la boucle for
    int colonne = 0;//utilisée pour la boucle for
    int compteur = 0;//compteur qui compte jusqu'a 10 pour afficher les coordonnées a droite de la carte
    printf("0 1 2 3 4 5 6 7 8 9\n"); //affiche les coordonnées au dessus de la grille
    for(ligne = 0;ligne < 10;ligne++) //boucle pour afficher la grille
    {
        for(colonne = 0;colonne < 10;colonne++)
        {
            printf("%c ",Tableau[ligne][colonne]);
        }
        printf("\t %d",compteur);
        compteur++;
        printf("\n");

    }

}

int JouerFonction(char Tableau[10][10],int Tableauchiffres[10][10]){ //Fonction pour jouer
    system("cls");//efface tout les éléments affiché pour plus de clarté en jeu
    bool jeuactif = true; //Tant que c'est actif , le jeu continue de faire la boucle
    int choixhorizontal = 0; //choix tir joueur horizontal
    int choixvertical = 0; //choix tir joueur vertical
    int NombreBateaux = 3;  
    int Score = 0; //nombre de tir
    int PVBateau2 = 2;
    int PVBateau3 = 3;
    int PVBateau4 = 4;

    while(jeuactif == true)
    {
        system("cls");


        AfficherTableau(Tableau);
        printf("\n Choissisez la case horizontale.");
        scanf("%d",&choixhorizontal);
        printf("\n Choissisez la case verticale.");
        scanf("%d",&choixvertical);

        if(Tableauchiffres[choixhorizontal][choixvertical] == 0)
        {
            printf("Oh non vous avez manque votre cible.. Reessayez \n");
            Tableau[choixhorizontal][choixvertical] = '~';
            Score++;
            system("pause");
        }

        if(Tableauchiffres[choixhorizontal][choixvertical] == 2)
        {
            printf("Bateau 2 touche\n");
            Tableau[choixhorizontal][choixvertical] = 'X';
            PVBateau2--;
            Score++;
            if(PVBateau2 == 0)
            {
                printf("Bateau 2 est coule\n");
                NombreBateaux--;
            }
            system("pause");
        }
        if(Tableauchiffres[choixhorizontal][choixvertical] == 3)
        {
            printf("Bateau 3 touche\n");
            Tableau[choixhorizontal][choixvertical] = 'X';
            PVBateau3--;
            Score++;
            if(PVBateau3 == 0)
            {
                printf("Bateau 3 est coule\n");
                NombreBateaux--;
            }
            system("pause");
        }
        if(Tableauchiffres[choixhorizontal][choixvertical] == 4)
        {
            printf("Bateau 4 touche\n");
            Tableau[choixhorizontal][choixvertical] = 'X';
            PVBateau4--;
            Score++;
            if(PVBateau4 == 0)
            {
                printf("Bateau 4 est coule\n");
                NombreBateaux--;
            }
            system("pause");
        }



        if(NombreBateaux == 0)
        {
            jeuactif = false;
        }
    }
    return Score;
}

#endif //NAVALBAATTTT_FONTIONS_H
