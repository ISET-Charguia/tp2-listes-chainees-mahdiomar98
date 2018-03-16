#include<stdio.h>
#include<stdlib.h>
#include "repertoire.h"
void afficheRepertoire(repertoire lerepertoire) {
	int i;
	for (i = 0; i < 26; i++) {
		printf("\n%c", 'A' + i);
		afficheOnglet(lerepertoire[i]);
	}
}
void afficheOnglet(ongletptr longlet) {
	if (longlet == NULL) {
		printf("\n****VIDE****");
	} else {
		while (longlet != NULL) {
			afficheFiche(longlet->lafiche);
			longlet = longlet->suivante;
		}
	}
}
void afficheFiche(ficheptr lafiche) {
	if (lafiche == NULL) {
		printf("\nFiche vide!");
	} else {
		printf("\nNom: %s, Pr�nom: %s, T�l�phone: %s", lafiche->nom,
				lafiche->prenom, lafiche->tel);
	}
}
void ajouterFiche(repertoire lerepertoire, ficheptr lafiche) {
if (lafiche != NULL) {
		printf("\nFiche ne pas vide!");
	} else {
		printf("\nNom:\t");
		scanf("%s",lafiche->nom);
		printf("\nPr�nom:\t");
		scanf("%s",lafiche->prenom);
		printf("\nT�l�phone:\t");
		scanf("%s",lafiche->tel);
	}
}
void majuscule(ficheptr lafiche) {
	lafiche[1]->nom=lafiche[1]->nom-32;
	lafiche[1]->prenom=lafiche[1]->prenom-32;
}
void ajouterDansOnglet(ongletptr *longlet, ficheptr lafiche) {
}
int avant(ficheptr fiche1, ficheptr fiche2) {
	return 0;
}
void repertoireVide(repertoire lerepertoire) {
	int i;
	for (i = 0; i < 26; i++)
		lerepertoire[i] = NULL;
}
void menu(repertoire lerepertoire) {

	int choix;
	do {
		printf(
				"\n================================Gestion de R�pertoire================================");
		printf(
				"\n=     1- Saisie du r�pertoire                                                       =");
		printf(
				"\n=     2- Affichage du r�pertoire                                                    =");
		printf(
				"\n=     3- Ajout d'une fiche                                                          =");
		printf(
				"\n=     4- Recherche de contact                                                       =");
		printf(
				"\n=     5- Quitter                                                                    =");
		printf(
				"\n=====================================================================================");
		printf("\n\t\tEntrer votre choix (1-5): ");
		scanf("%d", &choix);
		switch (choix) {
		case 1:
			choix1();
			break;
		case 2:
			choix2(lerepertoire);
			break;
		case 3:
			choix3();
			break;
		case 4:
			choix4();
			break;
		case 5:
			choix5();
			break;
		default:
			printf("\nV�rifier que le choix est dans [1,5]!");
		}
	} while (choix != 5);
}
void freeRepertoire(repertoire lerepertoire) {
}
void choix1() {
	printf("\nChoix1");
}
void choix2(repertoire r) {
	afficheRepertoire(r);
}
void choix3() {
	printf("\nChoix3");
}
void choix4() {
	printf("\nChoix4");
}
void choix5() {
	printf("\nAu revoir");
}