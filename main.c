#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choixm, choixf, N;
	double a, b, y0, alpha, h, *X, *Y;
void methodes(double *X, double *Y, int choixm, int N, double alpha, double h, int choixf, double a, double b);
double *abscisses(double a, double b, int N);		
	int fchoixm();
void AfficherResul(double *X, double *Y, int N);
	printf("\t>>>>>>>>>>  Resolution Numerique des equations differentielles  <<<<<<<\n\n");
	printf("\t Solution numerique d equation differentielle\n\n");
	printf("La solution de l equation differentielle y' = f(x,y(x)) avec la condition initiale y(a) = y0 sera calculee sut [a,b].\n\n");
	printf("Appuyer sur la touche <Entree> pour continuer ");
	getchar();
	system("clear");
	
	choixm=fchoixm();
	//system("cls");
	printf("Vous avez choisi la methode %d pour resoudre y' = f(x,y(x)).\n", choixm);
	printf("\nChoisissez l'equation differentielle\n");
	printf("<1>\t y' = (sin(x) - y)/2 \n");
	printf("<2>\t y' = (y - x + 2)/2 \n");
	printf("<3>\t y' = 2*x + 3*y \n");
	printf("<4>\t y' = x^2 - y + 1 \n");
	printf("<5>\t y' = -x*y \n");
	printf("<6>\t y' = exp(-2*x) + 2*y \n");
	printf("<7>\t y' = 2*x*y^2 + 4 \n");
	printf("<8>\t y' = 1 + y*y \n");
	printf("<9>\t y' = x*x + sin(y)*y \n");
	printf("\t choix <1-9>? ");
	scanf("%d", &choixf);
	printf("Vous avez choisi la methode %d pour resoudre l'équation différentielle    avec la condition initiale y(a) = y0.\n", choixm);
	printf("Une approximation numerique est calculée sur [a,b]. vous devez saisir les bornes de l'intervalle, la condition initiale et le nombre de pas.\n\n\n");
	printf("Appuyer sur la touche <Entree> pour continuer ");
	getchar();
	system("clear");
	printf("\t y' =      \n\n");
	printf(" Entrez la borne gauche de l'intervalle a = ");
	scanf("%lf",&a);
	printf(" La borne gauche de l'intervalle est a = %f \n", a);
	printf(" Entrez la borne droite de l'intervalle b = ");
	scanf("%lf",&b);
	printf(" La borne droite de l'intervalle est b = %f \n", b);
	printf(" Entrez la condition initiale y0 = ");
	scanf("%lf",&y0);
	printf(" La condition initiale y0 = %f \n", y0);
	printf(" Entrez le nombre de pas N = ");
	scanf("%d",&N);
	printf(" Le nombre de pas N = %d \n", N);
	int rep; printf("Arrivé");
	printf("Voulez vous faire des changements (1: Oui & 2: Non)? ");
	scanf("%d",&rep); 
	if(rep==1)
	{
		printf("La valeur de a est : %f", a);
		printf("Entrez la nouvelle valeur de a: ");
		scanf("%lf", &a);
		printf("La valeur de b est : %f", b);
		printf("Entrez la nouvelle valeur de b: ");
		scanf("%lf",&b);
		printf("La valeur de y0 est : %f", y0);
		printf("Entrez la nouvelle valeur de y0: ");
		scanf("%lf", &y0);
		printf("La valeur de N est : %d", N);
		printf("Entrez la nouvelle valeur de N: ");
		scanf("%d",&N);
	}
	//alpha=y0;
	
	X=abscisses(a,b,N);
	methodes(X, Y, choixm,N, y0, h,choixf, a, b);
	AfficherResul(X, Y, N);

	
	return 0;
}
