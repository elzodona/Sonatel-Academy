#include <stdio.h>
#include <stdlib.h>
#include "fonctions.c"
#include "exercice8.h"

#define MAXIMUM_ETUDIANTS 101

struct Etudiant {
  char nom[50];
  char prenom[50];
  char classe[50];
  char numero[50];
  float devoir;
  float examen;
  float projet;
  float moyenne;
};
//afficher tablau

//struct Etudiant Tableau_etudiants[MAXIMUM_ETUDIANTS];
int nombre_etudiants = 0;
int main() {
  struct Etudiant etudiant[MAXIMUM_ETUDIANTS];
  FILE *fichier = fopen("etudiants.txt", "a"); // Ouvre un fichier en mode ajout

  if (fichier == NULL) {
    printf("Impossible d'ouvrir le fichier\n");
    exit(1);
  }
 
  // Affiche les informations sur les étudiants à partir du fichier
  printf("Liste des etudiants:\n");
  rewind(fichier); // Rembobine le fichier au début
  while (fscanf(fichier, "Prenom: %s, Nom: %s, Classe: %s, Numero %s , Note devoir: %f, Note examen: %f, Note de Projet: %f\n", etudiant[nombre_etudiants].prenom, etudiant[nombre_etudiants].nom, etudiant[nombre_etudiants].classe, etudiant[nombre_etudiants].numero,&etudiant[nombre_etudiants].devoir, &etudiant[nombre_etudiants].examen, &etudiant[nombre_etudiants].projet) == 7) {
    printf("Prenom: %s, Nom: %s, Classe: %s, Numero %s, Note devoir: %.2f, Note devoir: %f, Note de projet: %f\n", etudiant[nombre_etudiants].prenom,etudiant[nombre_etudiants].nom,etudiant[nombre_etudiants].classe,etudiant[nombre_etudiants].numero ,etudiant[nombre_etudiants].devoir,etudiant[nombre_etudiants].examen, etudiant[nombre_etudiants].projet);
  }
    while (1) {
    printf("Entrez le prenom l'etudiant (0 pour arreter): ");
    scanf("%s", etudiant[nombre_etudiants].prenom);

    if (etudiant[nombre_etudiants].prenom[0] == '0') {
      break;
    }

    printf("Entrez le nom de l'etudiant : ");
    scanf("%s", etudiant[nombre_etudiants].nom);

    printf("Donnez la classe de l'etudiant :");
    scanf("%s", etudiant[nombre_etudiants].classe);
        
    do{
      printf("Entrez le numéro de téléphone: ");
      scanf("%s", etudiant[nombre_etudiants].numero);
      if (!(etudiant[nombre_etudiants].numero[0] == '7' && (etudiant[nombre_etudiants].numero[1] == '7' || etudiant[nombre_etudiants].numero[1] == '6' || etudiant[nombre_etudiants].numero[1] == '8' || etudiant[nombre_etudiants].numero[1] == '5' || etudiant[nombre_etudiants].numero[1] == '0') && strlen(etudiant[nombre_etudiants].numero) == 9)){
        printf("Le numero de telephone doit commencer par 77, 76, 78, 75 ou 70 et le numero doit etre de 9 chiffres. \n");
      }
    }while(!(etudiant[nombre_etudiants].numero[0] == '7' && (etudiant[nombre_etudiants].numero[1] == '7' || etudiant[nombre_etudiants].numero[1] == '6' || etudiant[nombre_etudiants].numero[1] == '8' || etudiant[nombre_etudiants].numero[1] == '5' || etudiant[nombre_etudiants].numero[1] == '0') && strlen(etudiant[nombre_etudiants].numero) == 9));
  
    do{
        printf("Entrez la note de devoir : ");
        scanf("%f", &etudiant[nombre_etudiants].devoir);
        if(verifie(etudiant[nombre_etudiants].devoir)== 0){
            printf("La note doit etre compris entre 0 et 20. \n");
        }
    }while(verifie(etudiant[nombre_etudiants].devoir) == 0 ); 

    do{
        printf("Entrez la note pour l'examen : ");
        scanf("%f", &etudiant[nombre_etudiants].examen);
        if(verifie(etudiant[nombre_etudiants].examen)==0){
            printf("La note de l'examen doit etre compris entre 0 et 20. \n");
        }
    }while(verifie(etudiant[nombre_etudiants].examen) == 0);

    do {
        printf("Entrez la note pour le projet : ");
        scanf("%f", &etudiant[nombre_etudiants].projet);
            if (verifie(etudiant[nombre_etudiants].projet) == 0)
            {
                printf("La note de projet doit etre compris entre 0 et 20. \n");
            }
    }while(verifie(etudiant[nombre_etudiants].projet) == 0);

    etudiant[nombre_etudiants].moyenne = calculer_moyenne(etudiant[nombre_etudiants].devoir, etudiant[nombre_etudiants].examen, etudiant[nombre_etudiants].projet);    

    //Affiche l'etudiant saisit dans le terminal(histoire de recapituler ;-) 
    printf("Prenom: %s, Nom: %s, Classe: %s, Numero %s, Devoir: %.2f, Examen: %.2f, Projet: %.2f, Moyenne: %.2f\n",  etudiant[nombre_etudiants].prenom,etudiant[nombre_etudiants].nom, etudiant[nombre_etudiants].classe, etudiant[nombre_etudiants].numero, etudiant[nombre_etudiants].devoir, etudiant[nombre_etudiants].examen,etudiant[nombre_etudiants].projet,etudiant[nombre_etudiants].moyenne);
    printf("Vous Ajouez un nouveau etudiant. \n");
    // Écrit les informations sur l'étudiant dans le fichier
    fprintf(fichier, "Prenom: %s, Nom: %s, Classe: %s, Numero %s, Devoir: %.2f, Examen: %.2f, Projet: %.2f, Moyenne: %.2f\n", etudiant[nombre_etudiants].prenom, etudiant[nombre_etudiants].nom, etudiant[nombre_etudiants].classe, etudiant[nombre_etudiants].numero, etudiant[nombre_etudiants].devoir, etudiant[nombre_etudiants].examen, etudiant[nombre_etudiants].projet,etudiant[nombre_etudiants].moyenne);
    nombre_etudiants++;
  }

  fclose(fichier); // Ferme le fichier
  //Menu
  int choix;
  do{
        printf("==========Menu==========\n");
        printf("1- Afficher tout \n");
        printf("2- Trier et afficher par ordre decroissant de la moyenne\n");
        printf("3-Rechercher par nom \n");
        printf("4-Recherche par prenom \n");
        printf("5-Recherche par classe \n");
        printf("6-recherche par telephone \n");
        printf("7-Quitter \nvotre choix:");
        scanf("%d", &choix);
        switch (choix)
        {
        case  1:
            Entete_tableau();
            for (int i = 0; i < nombre_etudiants; i++){
              corps_tableau(etudiant[i].prenom, etudiant[i].nom, etudiant[i].classe, etudiant[i].numero, etudiant[i].devoir, etudiant[i].examen, etudiant[i].projet, etudiant[i].moyenne);
            }
              break;
        case 2:
            
            break;
        case 3:
            printf("Donnez le nom a rechercher: ");
            if(strcmp(etudiant[nombre_etudiants].nom, etudiant[nombre_etudiants].nom) == 0){
                corps_tableau(etudiant[nombre_etudiants].prenom, etudiant[nombre_etudiants].nom, etudiant[nombre_etudiants].classe, etudiant[nombre_etudiants].numero, etudiant[nombre_etudiants].devoir, etudiant[nombre_etudiants].examen, etudiant[nombre_etudiants].projet, etudiant[nombre_etudiants].moyenne);
            }
            break;
        case 4:
            printf("Donnez le prenom a rechercher:  ");
            if(strcmp(etudiant[nombre_etudiants].prenom, etudiant[nombre_etudiants].prenom) == 0){
                corps_tableau(etudiant[nombre_etudiants].prenom, etudiant[nombre_etudiants].nom, etudiant[nombre_etudiants].classe, etudiant[nombre_etudiants].numero, etudiant[nombre_etudiants].devoir, etudiant[nombre_etudiants].examen, etudiant[nombre_etudiants].projet, etudiant[nombre_etudiants].moyenne);
            }
            break;
        case 5:
            printf("Donnez la classe a rechercher: ");
            if(strcmp(etudiant[nombre_etudiants].classe, etudiant[nombre_etudiants].classe) == 0){
                corps_tableau(etudiant[nombre_etudiants].prenom, etudiant[nombre_etudiants].nom, etudiant[nombre_etudiants].classe, etudiant[nombre_etudiants].numero, etudiant[nombre_etudiants].devoir, etudiant[nombre_etudiants].examen, etudiant[nombre_etudiants].projet, etudiant[nombre_etudiants].moyenne);
            }
            break;
        case 6:
            printf("Donnez le numero a rechercher: ");
            if(strcmp(etudiant[nombre_etudiants].numero, etudiant[nombre_etudiants].numero) == 0){
                corps_tableau(etudiant[nombre_etudiants].prenom, etudiant[nombre_etudiants].nom, etudiant[nombre_etudiants].classe, etudiant[nombre_etudiants].numero, etudiant[nombre_etudiants].devoir, etudiant[nombre_etudiants].examen, etudiant[nombre_etudiants].projet, etudiant[nombre_etudiants].moyenne);
            }
        case 7:
            printf("Vous avez quitter le programme.\n");
            break;
        default:
        printf("Choix invalide.\n");
            break;
        }
    }while(choix != 7);
  return 0;
}
