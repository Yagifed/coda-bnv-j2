#include <stdlib.h>
#include <stdio.h>

int main()
{
	char prenom[30];
	int age;
	int annee = 2026; 
	int fin;
	printf("Bonjour, quel est votre prenom ?\n");
	scanf("%s", prenom);
	printf("Bonjour %s, quel est votre age ?\n", prenom);
	scanf("%d", &age);
	annee = annee - age;
	fin = annee - 1;
	printf("%s, si vous etes de fin d'annee, votre annee de naissance est %d sinon c'est %d\n", prenom, fin, annee);
	exit(0);
}
