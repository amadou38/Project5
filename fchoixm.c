#include<stdio.h>
#include<stdlib.h>

	int fchoixm()
	{
		int choixm;
		printf("Choisissez la metode d'approximation :\n");
	printf("<1>\t Methode d'Euler\n");
	printf("<2>\t Methode d'Euler modifiee\n");
	printf("<3>\t Methode de Heun\n");
	printf("<4>\t Methode de Runge-Kutta d'ordre 2\n");
	printf("<5>\t Methode de Taylor d'ordre 2\n");
	printf("\t Choix <1-5>? ");
	scanf("%d", &choixm);
	return choixm;
	}
