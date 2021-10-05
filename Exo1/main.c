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

/******************************************/
/*   TPC2021 no 2  exo 1                  */
/*                                        */
/******************************************/

// La boucle FOR est utilisée lorsqu'on connaît le nombre d'itérations à effectuer.
// 
// D'autres boucles comme le WHILE expriment de façon plus naturelle qu'un évènement est
// attendu et va provoquer la sortie de boucle et donc mettre fin aux répétitions.

// Dans le cadre de ces TPs, on utilise le C pour coder des algorithmes de manière structurée.
// On s'interdit donc d'utiliser des instructions comme le GOTO qui permet des sauts difficiles à
// modéliser en programmation structurée.
// Les trois types de structures suivantes (pseudo-langage) :
// Pour i allant de debut à la fin , faire instructions , fait.
// Tant que condition est vraie, faire instructions, fait.
// et, Répéter faire instructions, fait, jusqu'à condition est vraie.
// se traduisent respectivement en C par :
// for ( i=debut ; i<= fin ; i++) {   instructions ; }
// while (condition) { instructions ; }
// do { instructions ; } while ( !condition );
// Dans la structure do .. while , les instructions seront exécutées au moins une fois.
// REMARQUE : Penser à donner une valeur initiale aux variables !! 



int main() {


	// Somme des n premiers entiers positifs :
	// Ecrire un programme qui calcule la somme des n premiers entiers positifs, avec n > 1, 
	// en utilisant les trois types de boucles.
	// La valeur de n est fixée dans le programme (prendre 100 pour commencer).
	// Afficher la valeur de n et la somme correspondante.

	setlocale(LC_ALL, "fr-FR");

	unsigned short int somme = 0;

	unsigned short int n = 100;
	
	// version for
	

	// version while do
	somme = 0;



	// version do while
	somme = 0;
	

	// Trouver la valeur maximum de n sans dépassement de capacité :
	// La somme est représentée par une variable de type unsigned short int, 
	// quelle est la valeur maximum de n pour que la variable représentant la somme ait une valeur correcte ? 
	// Concevoir un test qui permettra de sortir de la boucle while de manière anticipée en cas de risque de dépassement de capacité.
	// Aide : si A + valeur <= B alors B – A >= valeur.En calculant B - A on ne risque pas de faire un dépassement, contrairement à celui qui peut apparaître en calculant A + valeur.

	

	return(EXIT_SUCCESS);
}
