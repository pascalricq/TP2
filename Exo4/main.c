// This directive deactivates Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <limits.h>
#include <math.h>

/******************************************/
/*   TPC2021 no 2  exo 4                  */
/*                                        */
/******************************************/
// Ecrire un programme qui décompose une valeur de type unsigned int entrée au clavier 
// en une suite de chiffres séparés par des tirets.
// L'algorithme est basé sur une méthode numérique et non une méthode basée sur le traitement d'une chaîne de caractères.
// Par exemple la valeur 5763161 produit l'affichage 5-7-6-3-1-6-1
/*
Valeur max 4294967295

Entrez une valeur(0 pour fin) : 1

1
Valeur max 4294967295
Entrez une valeur : 456

4 - 5 - 6
Valeur max 4294967295
Entrez une valeur : 4294967295

4 - 2 - 9 - 4 - 9 - 6 - 7 - 2 - 9 - 5
Valeur max 4294967295
Entrez une valeur : 0
*/


int main() {

	unsigned int valeur;
	


	return EXIT_SUCCESS;
}